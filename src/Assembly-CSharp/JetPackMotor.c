
/* Vector3 ApplyInputVelocityChange(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,Vector3 *velocity,
                    Vector3 *baseVelocity,MethodInfo *method)

{
  pVVar1 = JetPackMotor_GetDesiredHorizontalVelocity(&VStack_2,this,(MethodInfo *)0x0);
  pMVar3 = (this->fields)._.groundState;
  VStack_4.x = pVVar1->x;
  VStack_4.y = pVVar1->y;
  fVar5 = pVVar1->z;
  if (pMVar3 == (MVGroundState *)0x0) {
DAT_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    pVVar1 = (Vector3 *)(*pcVar6)();
    return pVVar1;
  }
  bVar7 = MVGroundState::MVGroundState_get_Grounded(pMVar3,(MethodInfo *)0x0);
  if ((bVar7 != 0) && ((this->fields)._Thrust_k__BackingField == 0)) {
    pMVar3 = (this->fields)._.groundState;
    if (pMVar3 == (MVGroundState *)0x0) goto DAT_?;
    VStack_8.x = (pMVar3->fields).groundNormal.x;
    VStack_8.y = (pMVar3->fields).groundNormal.y;
    VStack_8.z = (pMVar3->fields).groundNormal.z;
    VStack_2._0_8_ = VStack_4._0_8_;
    VStack_2.z = fVar5;
    pVVar1 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                        (aVStack_9,&VStack_2,&VStack_8,(MethodInfo *)0x0);
    uVar10 = baseVelocity->x;
    uVar11 = pVVar1->x;
    uVar12 = pVVar1->y;
    VStack_4.x = (float)uVar10 + (float)uVar11;
    fVar5 = baseVelocity->z + pVVar1->z;
    VStack_4.y = baseVelocity->y + (float)uVar12;
  }
  uVar13 = velocity->x;
  uVar14 = velocity->y;
  fVar15 = velocity->z;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar6 = (code *)swi(3);
    pVVar1 = (Vector3 *)(*pcVar6)();
    return pVVar1;
  }
  pcRam_? = pcVar6;
  fVar17 = (float)(*pcRam_?)();
  fVar17 = fVar17 / _UNK_?;
  uVar18 = velocity->x;
  uVar19 = velocity->y;
  fVar20 = fVar17 * (VStack_4.y - (float)uVar14) * _UNK_?;
  fVar15 = fVar17 * (fVar5 - fVar15) * _UNK_?;
  fVar5 = velocity->z;
  __return_storage_ptr__->x = fVar17 * (VStack_4.x - (float)uVar13) * _UNK_? + (float)uVar18;
  __return_storage_ptr__->y = fVar20 + (float)uVar19;
  __return_storage_ptr__->z = fVar15 + fVar5;
  return __return_storage_ptr__;
}


/* Void ApplyJetImpulse(Single) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_ApplyJetImpulse
               (JetPackMotor *this,float jetpackThrust,MethodInfo *method)

{
  puVar1 = (undefined8 *)(*(this->klass->vtable).get_Velocity.methodPtr)(auStack_2,this);
  VStack_3._0_8_ = *puVar1;
  VStack_3.z = *(float *)(puVar1 + 1);
  fVar4 = VStack_3.y;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (_UNK_? < fVar4) {
    fVar4 = _UNK_?;
  }
  fVar4 = (_UNK_? - fVar4) / _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_3.x = (pVVar5->upVector).x;
  VStack_3.y = (pVVar5->upVector).y;
  fVar6 = (pVVar5->upVector).z;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  fVar9 = (float)(*pcRam_?)();
  fVar9 = fVar9 * fVar4 * jetpackThrust;
  VStack_3.z = fVar9 * fVar6;
  VStack_3.y = fVar9 * VStack_3.y;
  VStack_3.x = fVar9 * VStack_3.x;
  MVRigidBody::MVRigidBody_AddImpulse_1((MVRigidBody *)this,&VStack_3,0,(MethodInfo *)0x0);
  return;
}


/* Void DealImpactDamage(Vector3, Vector3) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_DealImpactDamage
               (JetPackMotor *this,Vector3 *curVelocity,Vector3 *prevVelocity,MethodInfo *method)

{
  this_00 = (this->fields).impactState;
  if (this_00 == (ImpactState *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  VStack_2.x = prevVelocity->x;
  VStack_2.y = prevVelocity->y;
  VStack_2.z = prevVelocity->z;
  interactableLocal = (this->fields).interactable;
  VStack_3.x = curVelocity->x;
  VStack_3.y = curVelocity->y;
  VStack_3.z = curVelocity->z;
  fVar4 = ImpactState::ImpactState_UpdateImpactState
                    (this_00,&VStack_3,&VStack_2,interactableLocal,(MethodInfo *)0x0);
  if (fVar4 != 0.0) {
    pMVar5 = (this->fields).interactable;
    if (pMVar5 == (MVInteractableBase *)0x0) goto code_?;
    (*(pMVar5->klass->vtable).__unknown.methodPtr)
              (pMVar5,fVar4,0,CONCAT71((int7)((ulonglong)interactableLocal >> 8),5),
               (pMVar5->klass->vtable).__unknown.method);
  }
  return;
}


/* Void FixedUpdateFunction(Quaternion, Boolean) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_FixedUpdateFunction
               (JetPackMotor *this,Quaternion *setQuaternion,bool shouldSetRotation,
               MethodInfo *method)

{
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar2->fields).waterPlaneManager;
    pSVar3 = (this->fields).smoothController;
    if ((((pSVar3 != (SmoothCharacterController *)0x0) &&
         (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) &&
        (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pMVar4,(MethodInfo *)0x0), this_04 != (GameObject *)0x0))
       && (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_04,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_6.x = 0.0;
      VStack_6.y = 0.0;
      VStack_6.z = 0.0;
      pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7,&VStack_6);
      if (this_00 != (WaterPlaneManager *)0x0) {
        VStack_10.x = VStack_6.x;
        VStack_10.y = VStack_6.y;
        VStack_10.z = VStack_6.z;
        fVar11 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                           (this_00,&VStack_10,(MethodInfo *)0x0);
        pJVar12 = this->klass;
        (this->fields).waterProximity = fVar11;
        cVar13 = (*(pJVar12->vtable).get_IsMovementLocked.methodPtr)(this);
        if (cVar13 != '\0') {
          return;
        }
        if (shouldSetRotation != 0) {
          pSVar3 = (this->fields).smoothController;
          if (((pSVar3 == (SmoothCharacterController *)0x0) ||
              (pMVar4 = (pSVar3->fields).controller, pMVar4 == (MvCharacterController *)0x0)) ||
             (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pMVar4,(MethodInfo *)0x0),
             pTVar5 == (Transform *)0x0)) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          auStack_14._0_4_ = setQuaternion->x;
          auStack_14._4_4_ = setQuaternion->y;
          auStack_14._8_4_ = setQuaternion->z;
          auStack_14._12_4_ = setQuaternion->w;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pvVar7,auStack_14);
        }
        pSVar3 = (this->fields).smoothController;
        uVar9._0_4_ = (this->fields).velocityPrevFrame.x;
        uVar9._4_4_ = (this->fields).velocityPrevFrame.y;
        fVar11 = (this->fields).velocityPrevFrame.z;
        if ((pSVar3 != (SmoothCharacterController *)0x0) &&
           (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) {
          this_01 = (this->fields).movableMotorState;
          if (this_01 != (MVMovableMotorState *)0x0) {
            VStack_10._0_8_ = uVar9;
            VStack_10.z = fVar11;
            bVar15 = MVMovableMotorState::MVMovableMotorState_Move
                               (this_01,&VStack_10,pMVar4,(pMVar4->fields).elipsoidRadius.x,
                                (this->fields)._.groundState,&VStack_1,(MethodInfo *)0x0);
            fVar16 = VStack_1.z;
            uVar17 = VStack_1._0_8_;
            VStack_10.x = VStack_1.x;
            VStack_10.y = VStack_1.y;
            VStack_10.z = VStack_1.z;
            VStack_6._0_8_ = uVar9;
            VStack_6.z = fVar11;
            pVVar18 = JetPackMotor_GetVelocity
                                ((Vector3 *)auStack_14,this,&VStack_6,&VStack_10,(MethodInfo *)0x0)
            ;
            uVar19 = VStack_1._0_8_;
            fVar20 = pVVar18->z;
            if (bVar15 == 0) {
              VStack_1.x = (float)uVar17;
              VStack_1.y = SUB84(uVar17,4);
              VStack_10.x = VStack_1.x;
              VStack_10.y = VStack_1.y;
              uVar21 = pVVar18->x;
              uVar22 = pVVar18->y;
              fVar23 = (float)uVar21;
              fVar24 = (float)uVar22;
              fVar25 = fVar16;
              VStack_1._0_8_ = uVar19;
            }
            else {
              fVar23 = pVVar18->x;
              fVar24 = pVVar18->y;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
              VStack_10.x = (pVVar26->zeroVector).x;
              VStack_10.y = (pVVar26->zeroVector).y;
              fVar25 = (pVVar26->zeroVector).z;
            }
            VStack_6.y = fVar24;
            VStack_6.x = fVar23;
            fVar27 = fVar23 + VStack_10.x;
            fVar28 = fVar24 + VStack_10.y;
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            fVar29 = (float)(*pcRam_?)();
            uVar17._0_4_ = fVar29 * fVar27;
            pSVar3 = (this->fields).smoothController;
            if ((pSVar3 != (SmoothCharacterController *)0x0) &&
               (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) {
              uVar17._4_4_ = fVar29 * fVar28;
              VStack_10._0_8_ = uVar17;
              VStack_10.z = fVar29 * (fVar20 + fVar25);
              (*(pMVar4->klass->vtable).__unknown_1.methodPtr)
                        (pMVar4,&VStack_10,(pMVar4->klass->vtable).__unknown_1.method);
              pSVar3 = (this->fields).smoothController;
              if ((pSVar3 != (SmoothCharacterController *)0x0) &&
                 (this_02 = (this->fields)._.groundState, this_02 != (MVGroundState *)0x0)) {
                VStack_10.y = fVar24;
                VStack_10.x = fVar23;
                VStack_10.z = fVar20;
                MVGroundState::MVGroundState_Update
                          (this_02,(pSVar3->fields).controller,&VStack_10,0.0,(MethodInfo *)0x0);
                pSVar3 = (this->fields).smoothController;
                if ((pSVar3 != (SmoothCharacterController *)0x0) &&
                   (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) {
                  VStack_10.x = (pMVar4->fields)._Velocity_k__BackingField.x;
                  VStack_10.y = (pMVar4->fields)._Velocity_k__BackingField.y;
                  fVar20 = (pMVar4->fields)._Velocity_k__BackingField.z;
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  fVar23 = (float)(*pcRam_?)();
                  pVVar30 = (this->fields).vehicleEnergyContainer;
                  (this->fields).velocityPrevFrame.x = VStack_10.x / fVar23;
                  (this->fields).velocityPrevFrame.y = VStack_10.y / fVar23;
                  (this->fields).velocityPrevFrame.z = fVar20 / fVar23;
                  if (pVVar30 != (VehicleEnergyContainer *)0x0) {
                    if (((((pVVar30->fields)._UsingEnergy_k__BackingField != 0) &&
                         ((pVVar30->fields).consumingEnergy != 0)) &&
                        (0.0 < (pVVar30->fields).energyStorage)) &&
                       (fVar20 = (pVVar30->fields).energyStorage - (pVVar30->fields).consumption,
                       (pVVar30->fields).energyStorage = fVar20, fVar20 < 0.0)) {
                      (pVVar30->fields).energyStorage = 0.0;
                    }
                    if (bVar15 == 0) {
                      uVar31 = (this->fields).velocityPrevFrame.x;
                      fVar20 = (this->fields).velocityPrevFrame.y;
                      fVar23 = (this->fields).velocityPrevFrame.z;
                      (this->fields).velocityPrevFrame.x = (float)uVar31 - VStack_1.x;
                      (this->fields).velocityPrevFrame.y = fVar20 - VStack_1.y;
                      (this->fields).velocityPrevFrame.z = fVar23 - fVar16;
                    }
                    this_03 = (this->fields).impactState;
                    if (this_03 != (ImpactState *)0x0) {
                      VStack_6.x = (this->fields).velocityPrevFrame.x;
                      VStack_6.y = (this->fields).velocityPrevFrame.y;
                      VStack_6.z = (this->fields).velocityPrevFrame.z;
                      interactableLocal = (this->fields).interactable;
                      VStack_10._0_8_ = uVar9;
                      VStack_10.z = fVar11;
                      fVar11 = ImpactState::ImpactState_UpdateImpactState
                                         (this_03,&VStack_6,&VStack_10,interactableLocal,
                                          (MethodInfo *)0x0);
                      if (fVar11 != 0.0) {
                        pMVar32 = (this->fields).interactable;
                        if (pMVar32 == (MVInteractableBase *)0x0) goto code_?;
                        (*(pMVar32->klass->vtable).__unknown.methodPtr)
                                  (pMVar32,fVar11,0,
                                   CONCAT71((int7)((ulonglong)interactableLocal >> 8),5),
                                   (pMVar32->klass->vtable).__unknown.method);
                      }
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
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void FrameUpdate() */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_FrameUpdate
               (JetPackMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if ((pSVar1 == (SmoothCharacterController *)0x0) ||
     (obj = (pSVar1->fields).smoothPhysicsMovement, obj == (SmoothPhysicsMovement *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar5 = (float)(*pcRam_?)();
  if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      bVar8 = iRam_? != 0;
      (obj->fields).current = pSVar7;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (obj->fields).next = pSVar7;
      func_?(&(obj->fields).next);
    }
  }
  if (((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  pSVar7 = (obj->fields).next;
  do {
    if (fVar4 - fVar5 < (pSVar7->fields).time) {
code_?:
      pSVar7 = (obj->fields).current;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar13 = (pSVar7->fields).time;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar14 = (float)(*pcRam_?)();
      fVar14 = ((fVar4 - fVar5) - fVar13) / fVar14;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar15 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
DAT_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      pvVar15 = (void *)(*pcRam_?)(pvVar15);
      pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar15,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      fVar4 = _UNK_?;
      pSVar7 = (obj->fields).current;
      if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
         (pSVar17 = (obj->fields).next, pSVar17 == (SmoothPhysicsMovement_Package *)0x0)) break;
      uStack_18._0_4_ = (pSVar17->fields).position.x;
      uStack_18._4_4_ = (pSVar17->fields).position.y;
      QStack_19.x = (pSVar7->fields).position.x;
      QStack_19.y = (pSVar7->fields).position.y;
      if (fVar14 < 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = _UNK_?;
        if (fVar14 <= _UNK_?) {
          fVar5 = fVar14;
        }
      }
      if (pOVar16 != (Object *)0x0) {
        QStack_19.y = ((float)uStack_18._4_4_ - QStack_19.y) * fVar5 + QStack_19.y;
        QStack_19.x = ((float)(undefined4)uStack_18 - QStack_19.x) * fVar5 + QStack_19.x;
        QStack_19.z = ((pSVar17->fields).position.z - (pSVar7->fields).position.z) * fVar5 +
                      (pSVar7->fields).position.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar20 = pOVar16[1].klass;
        if (pOVar20 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pOVar20);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar15 = (obj->fields)._._._._.m_CachedPtr;
        if (pvVar15 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        pvVar15 = (void *)(*pcRam_?)(pvVar15);
        pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar15,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        pSVar7 = (obj->fields).current;
        if ((pSVar7 != (SmoothPhysicsMovement_Package *)0x0) &&
           (pSVar17 = (obj->fields).next, pSVar17 != (SmoothPhysicsMovement_Package *)0x0)) {
          uStack_21._0_4_ = (pSVar17->fields).rotation.x;
          uStack_21._4_4_ = (pSVar17->fields).rotation.y;
          uStack_22._0_4_ = (pSVar17->fields).rotation.z;
          uStack_22._4_4_ = (pSVar17->fields).rotation.w;
          QStack_23.x = (pSVar7->fields).rotation.x;
          QStack_23.y = (pSVar7->fields).rotation.y;
          QStack_23.z = (pSVar7->fields).rotation.z;
          QStack_23.w = (pSVar7->fields).rotation.w;
          uStack_18 = 0;
          uStack_24 = 0;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&QStack_23,&uStack_21,fVar14,&uStack_18);
          if (pOVar16 == (Object *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uStack_25 = (undefined4)uStack_18;
          uStack_26 = uStack_18._4_4_;
          uStack_27 = (float)uStack_24;
          uStack_28 = uStack_24._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar20 = pOVar16[1].klass;
          if (pOVar20 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pOVar20);
          if ((obj->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
            pSVar7 = (obj->fields).current;
            pMVar29 = (obj->fields).worldObjectOwner;
            if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar17 = (obj->fields).next, pSVar17 == (SmoothPhysicsMovement_Package *)0x0)) break;
            uVar30 = (pSVar17->fields).position.x;
            uVar31 = (pSVar17->fields).position.y;
            uStack_18._0_4_ = (pSVar7->fields).position.x;
            uStack_18._4_4_ = (pSVar7->fields).position.y;
            if (fVar14 < 0.0) {
              fVar4 = 0.0;
            }
            else if (fVar14 <= fVar4) {
              fVar4 = fVar14;
            }
            QStack_19.z = ((pSVar17->fields).position.z - (pSVar7->fields).position.z) * fVar4 +
                          (pSVar7->fields).position.z;
            QStack_19.y = ((float)uVar31 - (float)uStack_18._4_4_) * fVar4 + (float)uStack_18._4_4_;
            QStack_19.x = ((float)uVar30 - (float)(undefined4)uStack_18) * fVar4 +
                          (float)(undefined4)uStack_18;
            (*(pMVar29->klass->vtable).set_WorldPosition.methodPtr)(pMVar29,&QStack_19);
            pSVar7 = (obj->fields).current;
            pMVar29 = (obj->fields).worldObjectOwner;
            if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar17 = (obj->fields).next, pSVar17 == (SmoothPhysicsMovement_Package *)0x0)) break;
            QStack_23.x = (pSVar17->fields).rotation.x;
            QStack_23.y = (pSVar17->fields).rotation.y;
            QStack_23.z = (pSVar17->fields).rotation.z;
            QStack_23.w = (pSVar17->fields).rotation.w;
            uStack_21._0_4_ = (pSVar7->fields).rotation.x;
            uStack_21._4_4_ = (pSVar7->fields).rotation.y;
            uStack_22._0_4_ = (pSVar7->fields).rotation.z;
            uStack_22._4_4_ = (pSVar7->fields).rotation.w;
            QStack_19.x = 0.0;
            QStack_19.y = 0.0;
            QStack_19.z = 0.0;
            QStack_19.w = 0.0;
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(&uStack_21,&QStack_23,fVar14,&QStack_19);
            if (pMVar29 == (MVWorldObjectClient *)0x0) break;
            QStack_23.x = QStack_19.x;
            QStack_23.y = QStack_19.y;
            QStack_23.z = QStack_19.z;
            QStack_23.w = QStack_19.w;
            MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                      (pMVar29,&QStack_23,(MethodInfo *)0x0);
          }
          if ((obj->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
            return;
          }
          pCVar32 = (obj->fields).cullingSubscriberBase;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar15 = (obj->fields)._._._._.m_CachedPtr;
          if (pvVar15 == (void *)0x0) goto DAT_?;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          pvVar15 = (void *)(*pcRam_?)(pvVar15);
          pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar15,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar16 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_18 = 0;
            uStack_24 = uStack_24 & 0xffffffff00000000;
            pOVar20 = pOVar16[1].klass;
            if (pOVar20 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pOVar20,&uStack_18);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CullingApiWrapper);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__CullingApiWrapper);
            }
            pBVar33 = TypeInfo__CullingApiWrapper->static_fields->spheres;
            if (pBVar33 != (BoundingSphere__Array *)0x0) {
              uVar9 = (pCVar32->fields)._CullingIndex_k__BackingField;
              if (uVar9 < (uint)pBVar33->max_length) {
                pBVar33->vector[(int)uVar9].position.x = (float)(undefined4)uStack_18;
                pBVar33->vector[(int)uVar9].position.y = (float)uStack_18._4_4_;
                pBVar33->vector[(int)uVar9].position.z = (float)uStack_24;
                return;
              }
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          break;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    if ((pQVar6->fields)._size < 1) goto code_?;
    bVar8 = iRam_? != 0;
    (obj->fields).current = (obj->fields).next;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar7 = (SmoothPhysicsMovement_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar6,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    bVar8 = iRam_? != 0;
    (obj->fields).next = pSVar7;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(obj->fields).next >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pSVar7 = (obj->fields).next;
  } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 GetDesiredHorizontalVelocity() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetDesiredHorizontalVelocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  pMVar1 = (this->fields).interactable;
  if (pMVar1 != (MVInteractableBase *)0x0) {
    fVar2 = (float)(*(pMVar1->klass->vtable).__unknown_8.methodPtr)
                              (pMVar1,3,_UNK_?,(pMVar1->klass->vtable).__unknown_8.method);
    aVStack_3[0].x = (this->fields)._InputMoveDirection_k__BackingField.x;
    aVStack_3[0].y = (this->fields)._InputMoveDirection_k__BackingField.y;
    aVStack_3[0].z = (this->fields)._InputMoveDirection_k__BackingField.z;
    fVar4 = (float)FUN_?(aVStack_3);
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar5)();
      return pVVar7;
    }
    pcRam_? = pcVar5;
    fVar8 = (float)(*pcRam_?)();
    fVar8 = fVar8 * _UNK_?;
    fVar9 = (this->fields).speed;
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    else if (_UNK_? < fVar8) {
      fVar8 = _UNK_?;
    }
    aVStack_3[0].z = (this->fields)._InputMoveDirection_k__BackingField.z;
    aVStack_3[0].x = (this->fields)._InputMoveDirection_k__BackingField.x;
    aVStack_3[0].y = (this->fields)._InputMoveDirection_k__BackingField.y;
    (this->fields).speed = (fVar4 * fVar2 - fVar9) * fVar8 + fVar9;
    fVar2 = (float)FUN_?(aVStack_3);
    if (fVar2 == 0.0) {
      (this->fields).speed = 0.0;
    }
    this_00 = (this->fields)._.groundState;
    if (this_00 != (MVGroundState *)0x0) {
      bVar10 = MVGroundState::MVGroundState_get_Grounded(this_00,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                           (aVStack_3,&(this->fields).velocityPrevFrame,method);
        fVar4 = (float)func_?(pVVar7->y);
        obj = (this->fields).slopeSpeedMultiplier;
        fVar4 = fVar4 * _UNK_?;
        fVar2 = (this->fields).speed;
        if (obj == (AnimationCurve *)0x0) goto code_?;
        pvVar11 = (obj->fields).m_Ptr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar5)();
          return pVVar7;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar5)();
          return pVVar7;
        }
        pcRam_? = pcVar5;
        fVar4 = (float)(*pcRam_?)(pvVar11,fVar4);
        (this->fields).speed = fVar4 * fVar2;
      }
      fVar2 = (this->fields).speed;
      uVar12 = (this->fields)._InputMoveDirection_k__BackingField.x;
      uVar13 = (this->fields)._InputMoveDirection_k__BackingField.y;
      fVar4 = (this->fields)._InputMoveDirection_k__BackingField.z;
      __return_storage_ptr__->x = fVar2 * (float)uVar12;
      __return_storage_ptr__->y = fVar2 * (float)uVar13;
      __return_storage_ptr__->z = fVar2 * fVar4;
      return __return_storage_ptr__;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar5)();
  return pVVar7;
}


/* List`1[MVOverlapResult] GetOverlappingObjects() */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetOverlappingObjects
          (JetPackMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if ((pSVar1 == (SmoothCharacterController *)0x0) ||
     (this_00 = (pSVar1->fields).controller, this_00 == (MvCharacterController *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pLVar3 = (List_1_MVOverlapResult_ *)(*pcVar2)();
    return pLVar3;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this_00,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pLVar3 = (List_1_MVOverlapResult_ *)(*pcVar2)();
    return pLVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pLVar3 = (List_1_MVOverlapResult_ *)(*pcVar2)();
    return pLVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    pLVar3 = (List_1_MVOverlapResult_ *)(*pcVar2)();
    return pLVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5,&VStack_4);
  VStack_7.x = (this_00->fields).center.x;
  VStack_7.y = (this_00->fields).center.y;
  fVar8 = VStack_4.x + VStack_7.x;
  fVar9 = VStack_4.z + (this_00->fields).center.z;
  fVar10 = VStack_4.y + VStack_7.y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar6._0_4_ = (this_00->fields).elipsoidRadius.x;
  uVar6._4_4_ = (this_00->fields).elipsoidRadius.y;
  fVar11 = (this_00->fields).elipsoidRadius.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar13._0_4_ = (pQVar12->identityQuaternion).x;
  uVar13._4_4_ = (pQVar12->identityQuaternion).y;
  uVar14._0_4_ = (pQVar12->identityQuaternion).z;
  uVar14._4_4_ = (pQVar12->identityQuaternion).w;
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this_00->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_4.y = fVar10;
  VStack_4.x = fVar8;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 1;
  VStack_4.z = fVar9;
  VStack_7._0_8_ = uVar6;
  VStack_7.z = fVar11;
  aQStack_15[0]._0_8_ = uVar13;
  aQStack_15[0]._8_8_ = uVar14;
  pLVar3 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                     (&VStack_7,&VStack_4,aQStack_15,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar3;
}


/* Vector3 GetVelocity(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_GetVelocity
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,Vector3 *velocity,
                    Vector3 *baseVelocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<float,_float>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<float,_float>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  uVar4 = velocity->x;
  uVar5 = velocity->y;
  fVar6 = (float)(*pcRam_?)();
  fVar6 = fVar6 * _UNK_?;
  VStack_7.z = velocity->z - velocity->z * fVar6;
  QStack_8.x = baseVelocity->x;
  QStack_8.y = baseVelocity->y;
  VStack_7.y = (float)uVar5 - (float)uVar5 * fVar6;
  VStack_7.x = (float)uVar4 - (float)uVar4 * fVar6;
  QStack_8.z = baseVelocity->z;
  pVVar3 = JetPackMotor_ApplyInputVelocityChange
                      ((Vector3 *)aQStack_9,this,&VStack_7,(Vector3 *)&QStack_8,(MethodInfo *)0x0
                      );
  this_00 = (this->fields)._.groundState;
  fVar10 = pVVar3->y;
  fVar6 = pVVar3->z;
  velocity->x = pVVar3->x;
  velocity->y = fVar10;
  velocity->z = fVar6;
  if (this_00 != (MVGroundState *)0x0) {
    bVar11 = MVGroundState::MVGroundState_get_Grounded(this_00,(MethodInfo *)0x0);
    if (bVar11 == 0) {
      VStack_7.z = (this->fields).velocityPrevFrame.z;
      VStack_7.x = (this->fields).velocityPrevFrame.x;
      VStack_7.y = (this->fields).velocityPrevFrame.y;
      QStack_8.z = velocity->z;
      QStack_8.x = velocity->x;
      QStack_8.y = velocity->y;
      pVVar3 = MVRigidBody::MVRigidBody_ApplyGravity
                          ((Vector3 *)aQStack_9,(MVRigidBody *)this,(Vector3 *)&QStack_8,
                           &VStack_7,(this->fields).interactable,(MethodInfo *)0x0);
      fVar10 = pVVar3->y;
      fVar6 = pVVar3->z;
      velocity->x = pVVar3->x;
      velocity->y = fVar10;
      velocity->z = fVar6;
    }
    this_01 = (this->fields).bounceState;
    if (this_01 != (BounceState *)0x0) {
      VStack_7.x = velocity->x;
      VStack_7.y = velocity->y;
      VStack_7.z = velocity->z;
      pVVar3 = BounceState::BounceState_ApplyBounceVelocity
                          ((Vector3 *)aQStack_9,this_01,&VStack_7,(MethodInfo *)0x0);
      fVar10 = pVVar3->y;
      fVar6 = pVVar3->z;
      velocity->x = pVVar3->x;
      velocity->y = fVar10;
      velocity->z = fVar6;
      if ((this->fields)._Thrust_k__BackingField == 0) {
code_?:
        VStack_7.x = velocity->x;
        VStack_7.y = velocity->y;
        VStack_7.z = velocity->z;
        pVVar3 = MVRigidBody::MVRigidBody_GetImpulse
                            ((Vector3 *)aQStack_9,(MVRigidBody *)this,&VStack_7,
                             (this->fields).interactable,(MethodInfo *)0x0);
        VStack_7.x = pVVar3->x;
        VStack_7.y = pVVar3->y;
        VStack_7.z = pVVar3->z;
        pVVar3 = MVRigidBody::MVRigidBody_VelocityDamping
                            ((Vector3 *)aQStack_9,&VStack_7,_UNK_?,
                             (this->fields).interactable,(MethodInfo *)0x0);
        fVar10 = pVVar3->y;
        fVar6 = pVVar3->z;
        __return_storage_ptr__->x = pVVar3->x;
        __return_storage_ptr__->y = fVar10;
        __return_storage_ptr__->z = fVar6;
        return __return_storage_ptr__;
      }
      pVVar12 = (this->fields).vehicleEnergyContainer;
      if (pVVar12 != (VehicleEnergyContainer *)0x0) {
        fVar6 = (this->fields).thrust;
        if (((pVVar12->fields)._UsingEnergy_k__BackingField != 0) &&
           ((pVVar12->fields).energyStorage <= 0.0)) {
          if (fVar6 < 0.0) {
            fVar6 = 0.0;
          }
          else {
            fVar10 = (this->fields).thrustOutOfEnergyMax;
            if (fVar10 < fVar6) {
              fVar6 = fVar10;
            }
          }
        }
        JetPackMotor_ApplyJetImpulse(this,fVar6,(MethodInfo *)0x0);
        if (((this->fields)._Thrust_k__BackingField == 0) || ((this->fields).leaveMode == 0))
        goto code_?;
        JetPackMotor_ApplyJetImpulse(this,_UNK_?,(MethodInfo *)0x0);
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        pSVar13 = (this->fields).smoothController;
        if ((pSVar13 != (SmoothCharacterController *)0x0) &&
           (pMVar14 = (pSVar13->fields).controller, pMVar14 != (MvCharacterController *)0x0)) {
          VStack_7.x = (pMVar14->fields).center.x;
          VStack_7.y = (pMVar14->fields).center.y;
          fVar6 = (pMVar14->fields).center.z;
          if (this_02 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            QStack_8.x = 0.0;
            QStack_8.y = 0.0;
            QStack_8._8_8_ = QStack_8._8_8_ & 0xffffffff00000000;
            pvVar15 = (this_02->fields)._._.m_CachedPtr;
            if (pvVar15 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_02,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              pVVar3 = (Vector3 *)(*pcVar1)();
              return pVVar3;
            }
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              pVVar3 = (Vector3 *)(*pcVar1)();
              return pVVar3;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(pvVar15,&QStack_8);
            fVar10 = VStack_7.x + QStack_8.x;
            fVar16 = VStack_7.y + QStack_8.y;
            fVar6 = fVar6 + QStack_8.z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar2._0_4_ = (pVVar17->upVector).x;
            uVar2._4_4_ = (pVVar17->upVector).y;
            fVar18 = (pVVar17->upVector).z;
            fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                               ((this->fields).leaveModeRotationRange.key,
                                (this->fields).leaveModeRotationRange.value,(MethodInfo *)0x0);
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              pVVar3 = (Vector3 *)(*pcVar1)();
              return pVVar3;
            }
            pcRam_? = pcVar1;
            fVar20 = (float)(*pcRam_?)();
            QStack_8.z = fVar6;
            QStack_8.y = fVar16;
            QStack_8.x = fVar10;
            VStack_7._0_8_ = uVar2;
            VStack_7.z = fVar18;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                      (this_02,(Vector3 *)&QStack_8,&VStack_7,fVar20 * fVar19,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            aQStack_9[0].x = 0.0;
            aQStack_9[0].y = 0.0;
            aQStack_9[0].z = 0.0;
            aQStack_9[0].w = 0.0;
            pvVar15 = (this_02->fields)._._.m_CachedPtr;
            if (pvVar15 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_02,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              pVVar3 = (Vector3 *)(*pcVar1)();
              return pVVar3;
            }
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              pVVar3 = (Vector3 *)(*pcVar1)();
              return pVVar3;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(pvVar15,aQStack_9);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            QStack_8.x = aQStack_9[0].x;
            QStack_8.y = aQStack_9[0].y;
            QStack_8.z = aQStack_9[0].z;
            QStack_8.w = aQStack_9[0].w;
            pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_7.x = (pVVar17->forwardVector).x;
            VStack_7.y = (pVVar17->forwardVector).y;
            VStack_7.z = (pVVar17->forwardVector).z;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)aQStack_9,&QStack_8,&VStack_7,(MethodInfo *)0x0);
            uVar21 = pVVar3->x;
            uVar22 = pVVar3->y;
            fVar6 = pVVar3->z;
            fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                               (0.0,_UNK_?,(MethodInfo *)0x0);
            aQStack_9[0].x = velocity->x;
            aQStack_9[0].y = velocity->y;
            velocity->x = (float)uVar21 * fVar10 + aQStack_9[0].x;
            velocity->y = (float)uVar22 * fVar10 + aQStack_9[0].y;
            velocity->z = fVar6 * fVar10 + velocity->z;
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar1)();
  return pVVar3;
}


/* Void Init(MVRuntimeDataVariable, JetPackMotor+JetPackMotorConfig) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_Init
               (JetPackMotor *this,MVRuntimeDataVariable *jetMode,
               JetPackMotor_JetPackMotorConfig *jetPackMotorConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BounceState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__JetPackMotor___Init_b__65_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovableMotorState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MvCharacterController__GetOverlappingObjects__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRigidBody__StuckEvaluator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  interactable = jetPackMotorConfig->interactableLocal;
  pBVar1 = (BounceState *)FUN_?(TypeInfo__BounceState);
  BounceState::BounceState__ctor(pBVar1,(MVInteractable *)interactable,(MethodInfo *)0x0);
  iVar2 = iRam_?;
  (this->fields).bounceState = pBVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).bounceState >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  fVar8 = jetPackMotorConfig->outOfEnergyThrustMax;
  (this->fields).thrust = jetPackMotorConfig->thrustStrength;
  (this->fields)._.density = jetPackMotorConfig->density;
  (this->fields).thrustOutOfEnergyMax = fVar8;
  (this->fields).smoothController = jetPackMotorConfig->avatarController;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).smoothController >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  this_00 = (this->fields)._._.worldObjectParent;
  if (this_00 != (MVWorldObjectClient *)0x0) {
    pHVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                        (this_00,(MethodInfo *)0x0);
    pSVar10 = (this->fields).smoothController;
    if ((pSVar10 != (SmoothCharacterController *)0x0) &&
       (pMVar11 = (pSVar10->fields).controller, pMVar11 != (MvCharacterController *)0x0)) {
      bVar7 = iRam_? != 0;
      (pMVar11->fields).IgnoreWoIds = pHVar9;
      if (bVar7) {
        uVar3 = (uint)((ulonglong)&(pMVar11->fields).IgnoreWoIds >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pSVar10 = (this->fields).smoothController;
      if (pSVar10 != (SmoothCharacterController *)0x0) {
        pMVar11 = (pSVar10->fields).controller;
        this_01 = (Func_1_UnityEngine_Vector2Int_ *)
                  FUN_?(
                               TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                               );
        mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
                  (this_01,(Object *)pMVar11,
                   MethodInfo__MvCharacterController__GetOverlappingObjects__,(MethodInfo *)0x0);
        this_02 = (MVRigidBody_StuckEvaluator *)FUN_?(TypeInfo__MVRigidBody__StuckEvaluator)
        ;
        MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
                  (this_02,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)this_01,
                   (MethodInfo *)0x0);
        bVar7 = iRam_? != 0;
        (this->fields).stuckEvaluator = this_02;
        if (bVar7) {
          uVar3 = (uint)((ulonglong)&(this->fields).stuckEvaluator >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pMVar12 = (MVMovableMotorState *)FUN_?(TypeInfo__MVMovableMotorState);
        iVar2 = iRam_?;
        (this->fields).movableMotorState = pMVar12;
        if (iVar2 != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).movableMotorState >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
            iVar2 = iRam_?;
          } while (!bVar7);
        }
        (this->fields).interactable = (MVInteractableBase *)interactable;
        pSVar10 = jetPackMotorConfig->avatarController;
        if (iVar2 != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).interactable >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        if ((pSVar10 != (SmoothCharacterController *)0x0) &&
           (pMVar11 = (pSVar10->fields).controller, pMVar11 != (MvCharacterController *)0x0)) {
          pAVar13 = (pMVar11->fields).OnControllerColliderHit;
          pDVar14 = (Delegate *)FUN_?(TypeInfo__System__Action<MVControllerColliderHit>);
          if (interactable != (AvatarInteractable *)0x0) {
            FUN_?(pDVar14);
            pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar13,pDVar14,(MethodInfo *)0x0);
            pAVar15 = TypeInfo__System__Action<MVControllerColliderHit>;
            if (pDVar14 == (Delegate *)0x0) {
              (pMVar11->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
            }
            else {
              pAVar13 = (Action_1_MVControllerColliderHit_ *)
                        FUN_?(pDVar14,TypeInfo__System__Action<MVControllerColliderHit>);
              if (pAVar13 == (Action_1_MVControllerColliderHit_ *)0x0) {
                FUN_?(pDVar14,pAVar15);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              (pMVar11->fields).OnControllerColliderHit = pAVar13;
              pAVar15 = TypeInfo__System__Action<MVControllerColliderHit>;
              lVar17 = FUN_?(pDVar14,TypeInfo__System__Action<MVControllerColliderHit>);
              if (lVar17 == 0) {
                FUN_?(pDVar14,pAVar15);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)&(pMVar11->fields).OnControllerColliderHit >> 0xc);
              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            if ((jetPackMotorConfig->avatarController != (SmoothCharacterController *)0x0) &&
               (pMVar11 = (jetPackMotorConfig->avatarController->fields).controller,
               pMVar11 != (MvCharacterController *)0x0)) {
              pAVar13 = (pMVar11->fields).OnControllerColliderHit;
              pBVar1 = (this->fields).bounceState;
              pDVar14 = (Delegate *)FUN_?(TypeInfo__System__Action<MVControllerColliderHit>)
              ;
              FUN_?(pDVar14,pBVar1);
              pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar13,pDVar14,(MethodInfo *)0x0);
              pAVar15 = TypeInfo__System__Action<MVControllerColliderHit>;
              if (pDVar14 == (Delegate *)0x0) {
                (pMVar11->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
              }
              else {
                pAVar13 = (Action_1_MVControllerColliderHit_ *)
                          FUN_?(pDVar14,TypeInfo__System__Action<MVControllerColliderHit>);
                if (pAVar13 == (Action_1_MVControllerColliderHit_ *)0x0) {
                  FUN_?(pDVar14,pAVar15);
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                (pMVar11->fields).OnControllerColliderHit = pAVar13;
                pAVar15 = TypeInfo__System__Action<MVControllerColliderHit>;
                lVar17 = FUN_?(pDVar14,TypeInfo__System__Action<MVControllerColliderHit>);
                if (lVar17 == 0) {
                  FUN_?(pDVar14,pAVar15);
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)&(pMVar11->fields).OnControllerColliderHit >> 0xc);
                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                  LOCK();
                  bVar7 = uVar5 == *puVar6;
                  if (bVar7) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              if ((jetPackMotorConfig->avatarController != (SmoothCharacterController *)0x0) &&
                 (pMVar11 = (jetPackMotorConfig->avatarController->fields).controller,
                 pMVar11 != (MvCharacterController *)0x0)) {
                pAVar13 = (pMVar11->fields).OnControllerColliderHit;
                pIVar18 = (this->fields).impactState;
                pDVar14 = (Delegate *)
                          FUN_?(TypeInfo__System__Action<MVControllerColliderHit>);
                FUN_?(pDVar14,pIVar18);
                pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar13,pDVar14,(MethodInfo *)0x0);
                pAVar15 = TypeInfo__System__Action<MVControllerColliderHit>;
                if (pDVar14 == (Delegate *)0x0) {
                  (pMVar11->fields).OnControllerColliderHit =
                       (Action_1_MVControllerColliderHit_ *)0x0;
                }
                else {
                  pAVar13 = (Action_1_MVControllerColliderHit_ *)
                            FUN_?(pDVar14,TypeInfo__System__Action<MVControllerColliderHit>)
                  ;
                  if (pAVar13 == (Action_1_MVControllerColliderHit_ *)0x0) {
                    FUN_?(pDVar14,pAVar15);
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  (pMVar11->fields).OnControllerColliderHit = pAVar13;
                  pAVar15 = TypeInfo__System__Action<MVControllerColliderHit>;
                  lVar17 = FUN_?();
                  if (lVar17 == 0) {
                    FUN_?(pDVar14,pAVar15);
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar3 = (uint)((ulonglong)&(pMVar11->fields).OnControllerColliderHit >> 0xc);
                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                  do {
                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar7 = uVar5 == *puVar6;
                    if (bVar7) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar7);
                }
                iVar2 = iRam_?;
                (this->fields).vehicleInteractable =
                     (MVInteractableBase *)jetPackMotorConfig->vehicleInteractable;
                if (iVar2 != 0) {
                  uVar3 = (uint)((ulonglong)&(this->fields).vehicleInteractable >> 0xc);
                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                  do {
                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar7 = uVar5 == *puVar6;
                    if (bVar7) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar7);
                }
                this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if (this_03 != (GameObject *)0x0) {
                  pVVar19 = (VehicleEnergyContainer *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (this_03,
                                       WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__GameObject__AddComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                                      );
                  bVar7 = iRam_? != 0;
                  (this->fields).vehicleEnergyContainer = pVVar19;
                  if (bVar7) {
                    uVar3 = (uint)((ulonglong)&(this->fields).vehicleEnergyContainer >> 0xc);
                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                    do {
                      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                      LOCK();
                      bVar7 = uVar5 == *puVar6;
                      if (bVar7) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar7);
                  }
                  pVVar19 = (this->fields).vehicleEnergyContainer;
                  uVar20 = (jetPackMotorConfig->vehicleEnergyContainerConfig).usingEnergy;
                  uVar21 = (jetPackMotorConfig->vehicleEnergyContainerConfig).storage;
                  uVar22 = (jetPackMotorConfig->vehicleEnergyContainerConfig).consumption;
                  if (pVVar19 != (VehicleEnergyContainer *)0x0) {
                    (pVVar19->fields)._UsingEnergy_k__BackingField = uVar20;
                    fVar8 = (float)(int)uVar21 * _UNK_?;
                    (pVVar19->fields).originalEnergyStorage = fVar8;
                    (pVVar19->fields).energyStorage = fVar8;
                    (pVVar19->fields).consumption = (float)(int)uVar22;
                    if (jetMode != (MVRuntimeDataVariable *)0x0) {
                      pMVar23 = (jetMode->fields).OnChange;
                      this_04 = (UnityAction_1_System_Object_ *)
                                FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]
                      ::UnityAction_1_System_Object___ctor
                                (this_04,(Object *)this,
                                 MethodInfo__JetPackMotor___Init_b__65_0_System__Object_,
                                 (MethodInfo *)0x0);
                      pMVar23 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pMVar23,(Delegate *)this_04,(MethodInfo *)0x0
                                          );
                      if (pMVar23 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                        (jetMode->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                      }
                      else {
                        pMVar24 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                        if (pMVar23->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                          pMVar24 = pMVar23;
                        }
                        if (pMVar24 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                          FUN_?(pMVar23);
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        (jetMode->fields).OnChange = pMVar24;
                        pMVar24 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                        if (pMVar23->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                          pMVar24 = pMVar23;
                        }
                        if (pMVar24 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                          FUN_?(pMVar23);
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                      }
                      if (iRam_? != 0) {
                        uVar3 = (uint)((ulonglong)&(jetMode->fields).OnChange >> 0xc);
                        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                        do {
                          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                          LOCK();
                          bVar7 = uVar5 == *puVar6;
                          if (bVar7) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar7);
                      }
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
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_IsStuck(JetPackMotor *this,MethodInfo *method)

{
  this_02 = (this->fields).stuckEvaluator;
  if (this_02 == (MVRigidBody_StuckEvaluator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
  uStack_4 = 0;
  iStack_5 = 0;
  uStack_6 = 0;
  pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  iStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  pIStack_13 = (IntVector__Array *)0x0;
  uStack_14 = 0;
  pDStack_15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
  uStack_16 = 0;
  iStack_17 = 0;
  pMStack_18 = (MVRigidBody_StuckEvaluator_StuckObject *)0x0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  fVar20 = (float)(*pcRam_?)();
  if (fVar20 - (this_02->fields).updateTime < (this_02->fields).updateInterval) {
    pDVar21 = (this_02->fields).stuckObjects;
    if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
    goto code_?;
    if ((pDVar21->fields)._count == (pDVar21->fields)._freeCount) {
      return 0;
    }
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
code_?:
    FUN_?();
    uVar22 = uStack_16;
code_?:
    uStack_16 = uVar22;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  fVar20 = (float)(*pcRam_?)();
  (this_02->fields).updateTime = fVar20;
  pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                       (this_02,(MethodInfo *)0x0);
  if (pDVar23 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this_02->fields).stuckObjects;
    if (pDVar23 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (pDVar23,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                );
      return 0;
    }
  }
  else {
    pDVar24 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(pDVar24,MethodInfo__System__Collections__Generic__List<int>__List__);
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this_02->fields).stuckObjects;
    pDStack_25 = pDVar24;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) && (pDVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                      (this_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                                      ),
                 pDVar26 !=
                 (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      pDStack_27 = (pDVar26->fields)._dictionary;
      ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      **)0x0;
      uStack_29 = 0;
      if (iRam_? != 0) {
        uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
        uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
        do {
          uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
          puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
          LOCK();
          bVar34 = uVar32 == *puVar33;
          if (bVar34) {
            *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
          }
          UNLOCK();
        } while (!bVar34);
      }
      if (pDStack_27 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pDStack_30 = pDStack_27;
        FUN_?();
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      **)((ulonglong)(uint)(pDStack_27->fields)._version << 0x20);
      uStack_29 = 0;
      uStack_35 = (longlong)ppDStack_28;
      uStack_36 = 0;
      pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0;
      ppDStack_28 = &pDStack_27;
code_?:
      if (pDStack_27 !=
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        if (uStack_35._4_4_ == (pDStack_27->fields)._version) {
          uVar22 = (uint)uStack_35;
code_?:
          if (pDStack_27 !=
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            if (uVar22 < (uint)(pDStack_27->fields)._count) {
              pDVar37 = (pDStack_27->fields)._entries;
              lVar38 = (longlong)(int)uVar22;
              uStack_35 = CONCAT44(uStack_35._4_4_,uVar22 + 1);
              if (pDVar37 != (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                             *)0x0) {
                if (uVar22 < (uint)pDVar37->max_length) goto code_?;
                goto code_?;
              }
              goto code_?;
            }
            uStack_35 = CONCAT44(uStack_35._4_4_,(pDStack_27->fields)._count + 1);
            uStack_36 = (ulonglong)uStack_36._4_4_ << 0x20;
            if (pDVar24 !=
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
                uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                do {
                  uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                  puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                  LOCK();
                  bVar34 = uVar32 == *puVar33;
                  if (bVar34) {
                    *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar34);
              }
              iStack_5 = *(int *)((longlong)&(pDVar24->fields)._entries + 4);
              uStack_29 = 0;
              uStack_4 = 0;
              uStack_6 = 0;
              pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0;
              ppDStack_28 = &pDStack_3;
              pDStack_3 = pDVar24;
              while( true ) {
                if (pDStack_3 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) goto code_?;
                if ((iStack_5 != *(int *)((longlong)&(pDStack_3->fields)._entries + 4)) ||
                   (lVar38 = (longlong)(int)uStack_4,
                   *(uint *)&(pDStack_3->fields)._entries <= uStack_4)) break;
                pIVar39 = (pDStack_3->fields)._buckets;
                if (pIVar39 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar39->max_length <= uStack_4) goto code_?;
                uStack_6 = CONCAT44(uStack_6._4_4_,pIVar39->vector[lVar38]);
                uStack_4 = uStack_4 + 1;
                pDVar21 = (this_02->fields).stuckObjects;
                if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
                              0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,pIVar39->vector[lVar38]
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                          );
              }
              if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   ->klass->field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (pDStack_3 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if (iStack_5 != *(int *)((longlong)&(pDStack_3->fields)._entries + 4))
              goto code_?;
              uStack_4 = *(int *)&(pDStack_3->fields)._entries + 1;
              uStack_6 = uStack_6 & 0xffffffff00000000;
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&pDStack_40 >> 0xc);
                uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                do {
                  uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                  puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                  LOCK();
                  bVar34 = uVar32 == *puVar33;
                  if (bVar34) {
                    *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar34);
              }
              uStack_41 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)(ulonglong)(uint)(pDVar23->fields)._version;
              uStack_42 = 2;
              uStack_43 = (IntVector__Array *)0x0;
              uStack_44 = 0;
              uStack_45 = 0;
              uStack_8 = uStack_41;
              iStack_9 = 0;
              uStack_10 = 0;
              uStack_11 = 0;
              uStack_12 = 0;
              pIStack_13 = (IntVector__Array *)0x0;
              uStack_14 = 2;
              pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0;
              ppDStack_28 = &pDStack_7;
              pDStack_7 = pDVar23;
              pDStack_40 = pDVar23;
              do {
                if (pDStack_7 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) goto code_?;
                if ((int)uStack_8 != (pDStack_7->fields)._version) goto code_?;
                uVar22 = uStack_8._4_4_;
                do {
                  if (pDStack_7 ==
                      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0) goto code_?;
                  if ((uint)(pDStack_7->fields)._count <= uVar22) {
                    uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                 *)CONCAT44((pDStack_7->fields)._count + 1,(int)uStack_8);
                    iStack_9 = 0;
                    uStack_10 = 0;
                    uStack_11 = 0;
                    uStack_12 = 0;
                    pIStack_13 = (IntVector__Array *)0x0;
                    iVar46 = (pDVar23->fields)._count;
                    if (0 < iVar46) {
                      pIVar39 = (pDVar23->fields)._buckets;
                      if (pIVar39 == (Int32__Array *)0x0) goto code_?;
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pDVar23->fields)._buckets,0,(int32_t)pIVar39->max_length,
                                 (MethodInfo *)0x0);
                      (pDVar23->fields)._count = 0;
                      (pDVar23->fields)._freeList = -1;
                      (pDVar23->fields)._freeCount = 0;
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pDVar23->fields)._entries,0,iVar46,(MethodInfo *)0x0);
                    }
                    piVar47 = &(pDVar23->fields)._version;
                    *piVar47 = *piVar47 + 1;
                    pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)(this_02->fields).stuckObjects;
                    if ((pDVar23 ==
                         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                          *)0x0) ||
                       (pDVar48 = mscorlib.dll::System::Collections::Generic::
                                  Dictionary`2[UnityEngine::UIElements::
                                  TypeConverterRegistry+ConverterKey,System::Object]::
                                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                            (pDVar23,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                            ),
                       pDVar48 ==
                       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0)) goto code_?;
                    pDVar23 = (pDVar48->fields)._dictionary;
                    ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                    **)0x0;
                    uStack_29 = 0;
                    if (iRam_? != 0) {
                      uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
                      uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                      do {
                        uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                        puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                        LOCK();
                        bVar34 = uVar32 == *puVar33;
                        if (bVar34) {
                          *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar34);
                    }
                    fVar20 = TypeRef__System__Activator__T._0_4_;
                    if (pDVar23 ==
                        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) {
                      pDStack_30 = pDVar23;
                      FUN_?();
                      pcVar1 = (code *)swi(3);
                      bVar2 = (*pcVar1)();
                      return bVar2;
                    }
                    iStack_17 = (pDVar23->fields)._version;
                    uStack_29 = 0;
                    uStack_16 = 0;
                    pMStack_18 = (MVRigidBody_StuckEvaluator_StuckObject *)0x0;
                    pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                   *)0x0;
                    ppDStack_28 = &pDStack_15;
                    pDStack_15 = pDVar23;
                    while( true ) {
                      if (pDStack_15 ==
                          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)0x0) goto code_?;
                      if (iStack_17 != (pDStack_15->fields)._version) break;
                      do {
                        if (pDStack_15 ==
                            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0) goto code_?;
                        if ((uint)(pDStack_15->fields)._count <= uStack_16) {
                          return 0;
                        }
                        pDVar37 = (pDStack_15->fields)._entries;
                        lVar38 = (longlong)(int)uStack_16;
                        uVar22 = uStack_16 + 1;
                        if (pDVar37 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                       *)0x0) goto code_?;
                        bVar34 = (uint)pDVar37->max_length <= uStack_16;
                        uStack_16 = uVar22;
                        if (bVar34) goto code_?;
                      } while ((&pDVar37->vector[0].hashCode)[lVar38 * 6] < 0);
                      pMStack_18 = *(MVRigidBody_StuckEvaluator_StuckObject **)
                                     ((longlong)&pDVar37->vector[0].key + lVar38 * 0x18 + 8);
                      func_?();
                      pMVar49 = pMStack_18;
                      if (pMStack_18 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0)
                      goto code_?;
                      pcVar1 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar1;
                      fVar50 = (float)(*pcRam_?)();
                      if ((fVar20 <= fVar50 - (pMVar49->fields).stuckTime) &&
                         (bVar2 = MVRigidBody+StuckEvaluator+StuckObject::
                                   MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                             (pMVar49,(MethodInfo *)0x0), bVar2 == 0)) {
                        return 1;
                      }
                    }
                    goto code_?;
                  }
                  pDVar37 = (pDStack_7->fields)._entries;
                  lVar38 = (longlong)(int)uVar22;
                  uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)CONCAT44(uVar22 + 1,(int)uStack_8);
                  if (pDVar37 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                 *)0x0) goto code_?;
                  if ((uint)pDVar37->max_length <= uVar22) goto code_?;
                  lVar51 = lVar38 * 0x20;
                  uVar22 = uVar22 + 1;
                } while (pDVar37->vector[lVar38].hashCode < 0);
                iVar46 = *(int32_t *)&pDVar37->vector[lVar38].key.SourceType;
                pDStack_25 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)0x0;
                uStack_52 = (IntVector__Array *)0x0;
                apIStack_53[0] = (IntVector__Array *)0x0;
                pTVar54 = &pDVar37->vector[lVar38].key;
                pIVar55 = *(IntVector__Array **)&pTVar54->DestinationType;
                pIVar56 = *(IntVector__Array **)(pTVar54 + 1);
                if ((MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                     ->klass->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                pDStack_25 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)CONCAT44(pDStack_25._4_4_,iVar46);
                uStack_52 = pIVar55;
                apIStack_53[0] = pIVar56;
                func_?(apIStack_53);
                iStack_9 = (int32_t)pDStack_25;
                uStack_10 = pDStack_25._4_4_;
                uStack_11 = SUB84(uStack_52,0);
                uStack_12 = uStack_52._4_4_;
                pIStack_13 = apIStack_53[0];
                func_?(&pIStack_13);
                iVar46 = iStack_9;
                pDStack_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)CONCAT44(uStack_10,iStack_9);
                uStack_41 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)CONCAT44(uStack_12,uStack_11);
                uStack_43 = pIStack_13;
                this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                          (this_02->fields).stuckObjects;
                if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
                goto code_?;
                iVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Vector3]::
                         Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                   (this_01,iStack_9,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                                    ->klass->rgctx_data[0x21].method);
                pDVar21 = (this_02->fields).stuckObjects;
                if (iVar57 < 0) {
                  pMVar49 = (MVRigidBody_StuckEvaluator_StuckObject *)
                            FUN_?(TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
                  pDStack_25 = uStack_41;
                  uStack_52 = uStack_43;
                  MVRigidBody+StuckEvaluator+StuckObject::
                  MVRigidBody_StuckEvaluator_StuckObject__ctor
                            (pMVar49,(MVOverlapResult *)&pDStack_25,(MethodInfo *)0x0);
                  if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *
                                )0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,iVar46,
                             (Object *)pMVar49,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)lVar51 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                             ->klass->rgctx_data[0x22].method);
                }
                else {
                  if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *
                                )0x0) goto code_?;
                  pOVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,iVar46,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      );
                  if (pOVar58 == (Object *)0x0) goto code_?;
                  *(undefined4 *)&pOVar58[1].monitor = (undefined4)uStack_41;
                  *(undefined4 *)((longlong)&pOVar58[1].monitor + 4) = uStack_41._4_4_;
                  *(undefined4 *)&pOVar58[2].klass = (undefined4)uStack_43;
                  *(undefined4 *)((longlong)&pOVar58[2].klass + 4) = uStack_43._4_4_;
                  func_?();
                }
              } while( true );
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
code_?:
  uVar22 = uVar22 + 1;
  if (-1 < (&pDVar37->vector[0].hashCode)[lVar38 * 6]) goto code_?;
  goto code_?;
code_?:
  iVar46 = *(int32_t *)((longlong)&pDVar37->vector[0].key + lVar38 * 0x18);
  uStack_36 = CONCAT44(uStack_36._4_4_,iVar46);
  iVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
           Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                     ((Dictionary_2_System_Int32_PendingPrototypeData_ *)pDVar23,iVar46,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                      ->klass->rgctx_data[0x21].method);
  if (iVar57 < 0) {
    if (pDVar24 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) goto code_?;
    FUN_?(pDVar24,iVar46,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  goto code_?;
}


/* GroundChange Move(Vector3, Vector3) */

GroundChange__Enum
Assembly-CSharp.dll::JetPackMotor::JetPackMotor_Move
          (JetPackMotor *this,Vector3 *velocity,Vector3 *baseVelocity,MethodInfo *method)

{
  uVar1 = baseVelocity->x;
  uVar2 = baseVelocity->y;
  aVStack_3[0].x = velocity->x;
  aVStack_3[0].y = velocity->y;
  fVar4 = (float)uVar1 + aVStack_3[0].x;
  fVar5 = baseVelocity->z;
  fVar6 = velocity->z;
  fVar7 = (float)uVar2 + aVStack_3[0].y;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    GVar10 = (*pcVar8)();
    return GVar10;
  }
  pcRam_? = pcVar8;
  fVar11 = (float)(*pcRam_?)();
  pSVar12 = (this->fields).smoothController;
  if ((pSVar12 != (SmoothCharacterController *)0x0) &&
     (pMVar13 = (pSVar12->fields).controller, pMVar13 != (MvCharacterController *)0x0)) {
    aVStack_3[0].y = fVar7 * fVar11;
    aVStack_3[0].x = fVar4 * fVar11;
    aVStack_3[0].z = (fVar5 + fVar6) * fVar11;
    (*(pMVar13->klass->vtable).__unknown_1.methodPtr)
              (pMVar13,aVStack_3,(pMVar13->klass->vtable).__unknown_1.method);
    pSVar12 = (this->fields).smoothController;
    if ((pSVar12 != (SmoothCharacterController *)0x0) &&
       (this_00 = (this->fields)._.groundState, this_00 != (MVGroundState *)0x0)) {
      aVStack_3[0].x = velocity->x;
      aVStack_3[0].y = velocity->y;
      aVStack_3[0].z = velocity->z;
      MVGroundState::MVGroundState_Update
                (this_00,(pSVar12->fields).controller,aVStack_3,0.0,(MethodInfo *)0x0);
      return GroundChange__Enum_UnChanged;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  GVar10 = (*pcVar8)();
  return GVar10;
}


/* Void OnJetModeChange(MVJetPack+JetModeType) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_OnJetModeChange
               (JetPackMotor *this,MVJetPack_JetModeType__Enum jetModeType,MethodInfo *method)

{
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if (pVVar1 != (VehicleEnergyContainer *)0x0) {
    (pVVar1->fields).consumingEnergy = (char)jetModeType == '\x01' || (char)jetModeType == '\x02';
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_RefillEnergy
               (JetPackMotor *this,VehicleEnergyRefill *vehicleEnergyRefill,MethodInfo *method)

{
  this_00 = (this->fields).vehicleEnergyContainer;
  if (this_00 != (VehicleEnergyContainer *)0x0) {
    aVStack_1[0].spawnerId = vehicleEnergyRefill->spawnerId;
    aVStack_1[0].prediction = vehicleEnergyRefill->prediction;
    aVStack_1[0]._5_3_ = *(undefined3 *)&vehicleEnergyRefill->field_0x5;
    aVStack_1[0].amount = vehicleEnergyRefill->amount;
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_RefillEnergy
              (this_00,aVStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RollbackRefillEnergyPrediction(Int32) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_RollbackRefillEnergyPrediction
               (JetPackMotor *this,int32_t spawnerId,MethodInfo *method)

{
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if (pVVar1 == (VehicleEnergyContainer *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                  ,CONCAT44(in_register_00000014,spawnerId),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar3 = (pVVar1->fields).predictions;
  if (pDVar3 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                 *)0x0) {
    uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__FindEntry
                      (pDVar3,spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                       ->klass->rgctx_data[0x21].method);
    if ((int)uVar4 < 0) {
      return;
    }
    pDVar5 = (pDVar3->fields)._entries;
    if (pDVar5 != (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                   *)0x0) {
      if ((uint)pDVar5->max_length <= uVar4) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar6 = pDVar5->vector[(int)uVar4].value.vehicleEnergyRefill.amount;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar6 = (pVVar1->fields).energyStorage - fVar6 * (pVVar1->fields).originalEnergyStorage;
      (pVVar1->fields).energyStorage = fVar6;
      if (fVar6 < 0.0) {
        (pVVar1->fields).energyStorage = 0.0;
      }
      pDVar3 = (pVVar1->fields).predictions;
      if (pDVar3 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
        VehicleEnergy::VehicleEnergyRefillPrediction]::
        Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                  (pDVar3,spawnerId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_SuspendImpactDamage
               (JetPackMotor *this,MethodInfo *method)

{
  pIVar1 = (this->fields).impactState;
  if (pIVar1 != (ImpactState *)0x0) {
    bVar2 = cRam_? == '\0';
    (pIVar1->fields).suspendImpactDamageCounter = 1;
    if (bVar2) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
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
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::JetPackMotor::JetPackMotor_UsesEnergy
               (JetPackMotor *this,MethodInfo *method)

{
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if (pVVar1 != (VehicleEnergyContainer *)0x0) {
    return (pVVar1->fields)._UsingEnergy_k__BackingField;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void <Init>b__65_0(Object) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor__Init_b__65_0
               (JetPackMotor *this,Object *jetModeVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVJetPack__JetModeType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (jetModeVal != (Object *)0x0) {
    if ((jetModeVal->klass->_0).element_class !=
        (TypeInfo__MVJetPack__JetModeType->_0).element_class) {
      FUN_?(jetModeVal);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pVVar2 = (this->fields).vehicleEnergyContainer;
    if (pVVar2 != (VehicleEnergyContainer *)0x0) {
      (pVVar2->fields).consumingEnergy =
           *(char *)&jetModeVal[1].klass == '\x01' || *(char *)&jetModeVal[1].klass == '\x02';
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JetPackMotor() */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor__ctor(JetPackMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationCurve);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ImpactState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<float,_float>__KeyValuePair_float__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Keyframe);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RuntimeEventType);
    LOCK();
    UNLOCK();
    FUN_?(&_5F4C7E3BCFA8C6ACC6CE23964419D17A794C3AA4EFB5F94B393C30094512435C_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).thrust = 1500.0;
  (this->fields).leaveModeRotationRange.key = 100.0;
  (this->fields).leaveModeRotationRange.value = 400.0;
  keys = (Keyframe__Array *)FUN_?();
  uVar1 = _UNK_?;
  if (keys != (Keyframe__Array *)0x0) {
    if ((int)keys->max_length != 0) {
      uVar2 = _UNK_?;
      keys->vector[0].m_Time = (float)_UNK_?;
      uVar3 = _UNK_?;
      keys->vector[0].m_Value = (float)uVar2;
      _UNK_? = (undefined4)uVar1;
      _UNK_? = SUB84(uVar1,4);
      uVar2 = _UNK_?;
      keys->vector[0].m_InTangent = (float)_UNK_?;
      _UNK_? = uVar3;
      keys->vector[0].m_OutTangent = (float)uVar2;
      keys->vector[0].m_WeightedMode = 0;
      uVar4 = _UNK_?;
      uVar1 = _UNK_?;
      keys->vector[0].m_InWeight = 0.0;
      keys->vector[0].m_OutWeight = 0.0;
      uVar3 = _UNK_?;
      if (1 < (uint)keys->max_length) {
        _UNK_? = (undefined4)uVar1;
        _UNK_? = SUB84(uVar1,4);
        uVar2 = _UNK_?;
        keys->vector[1].m_Time = (float)_UNK_?;
        _UNK_? = uVar3;
        uVar1 = _UNK_?;
        keys->vector[1].m_Value = (float)uVar2;
        _UNK_? = (undefined4)uVar4;
        _UNK_? = SUB84(uVar4,4);
        uVar2 = _UNK_?;
        keys->vector[1].m_InTangent = (float)_UNK_?;
        _UNK_? = uVar1;
        keys->vector[1].m_OutTangent = (float)uVar2;
        keys->vector[1].m_WeightedMode = 0;
        uVar4 = _UNK_?;
        uVar1 = _UNK_?;
        keys->vector[1].m_InWeight = 0.0;
        keys->vector[1].m_OutWeight = 0.0;
        uVar3 = _UNK_?;
        if (2 < (uint)keys->max_length) {
          _UNK_? = (undefined4)uVar1;
          _UNK_? = SUB84(uVar1,4);
          uVar2 = _UNK_?;
          keys->vector[2].m_Time = (float)_UNK_?;
          _UNK_? = uVar3;
          uVar1 = _UNK_?;
          keys->vector[2].m_Value = (float)uVar2;
          _UNK_? = (undefined4)uVar4;
          _UNK_? = SUB84(uVar4,4);
          uVar2 = _UNK_?;
          keys->vector[2].m_InTangent = (float)_UNK_?;
          _UNK_? = uVar1;
          keys->vector[2].m_OutTangent = (float)uVar2;
          keys->vector[2].m_WeightedMode = 0;
          keys->vector[2].m_InWeight = 0.0;
          keys->vector[2].m_OutWeight = 0.0;
          pAVar5 = (AnimationCurve *)FUN_?(TypeInfo__UnityEngine__AnimationCurve);
          pvVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                    AnimationCurve_Internal_Create(keys,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          (pAVar5->fields).m_Ptr = pvVar6;
          (pAVar5->fields).m_RequiresNativeCleanup = 1;
          (this->fields).slopeSpeedMultiplier = pAVar5;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).slopeSpeedMultiplier >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          explosionEvents =
               (RuntimeEventType__Enum__Array *)
               FUN_?(TypeInfo__MV__Common__RuntimeEventType,3);
          mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
          RuntimeHelpers_InitializeArray_1
                    ((Array *)explosionEvents,
                     __5F4C7E3BCFA8C6ACC6CE23964419D17A794C3AA4EFB5F94B393C30094512435C_Field,
                     (MethodInfo *)0x0);
          this_00 = (ImpactState *)FUN_?(TypeInfo__ImpactState);
          ImpactState::ImpactState__ctor(this_00,explosionEvents,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          (this->fields).impactState = this_00;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).impactState >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__MVGroundState);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar12 = (MVGroundState *)FUN_?(TypeInfo__MVGroundState);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVMaterial);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar13 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
          bVar7 = iRam_? != 0;
          (pMVar12->fields).groundMaterial = pMVar13;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&pMVar12->fields >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          uVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                   ::ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          }
          lStack_14 = (ulonglong)uVar8 << 0x20;
          uVar15 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                  cryptoKey;
          bVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                   ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                             ((MethodInfo *)0x0);
          uStack_17._0_2_ = (ushort)(bVar16 != 0) << 8;
          uStack_17 = (uint)CONCAT12(1,(short)uStack_17);
          bVar7 = cRam_? == '\0';
          (pMVar12->fields).grounded.currentCryptoKey = uVar15;
          *(undefined3 *)&(pMVar12->fields).grounded.field_0x1 = lStack_14._1_3_;
          (pMVar12->fields).grounded.hiddenValue = lStack_14._4_4_;
          (pMVar12->fields).grounded.fakeValue = (undefined1)uStack_17;
          (pMVar12->fields).grounded.fakeValueChanged = uStack_17._1_1_;
          (pMVar12->fields).grounded.inited = uStack_17._2_1_;
          (pMVar12->fields).grounded.field_0xb = uStack_17._3_1_;
          if (bVar7) {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          bVar7 = iRam_? != 0;
          pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar19 = (pVVar18->zeroVector).y;
          fVar20 = (pVVar18->zeroVector).z;
          (pMVar12->fields).groundNormal.x = (pVVar18->zeroVector).x;
          (pMVar12->fields).groundNormal.y = fVar19;
          (pMVar12->fields).groundNormal.z = fVar20;
          (this->fields)._.groundState = pMVar12;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields)._.groundState >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          (this->fields)._.weight = 1.0;
          (this->fields)._.density = 1.0;
          (this->fields)._.isPlayerControlled = 1;
          pLVar21 = (List_1_UnityEngine_Vector3_ *)
                    FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                 );
          FUN_?(pLVar21,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
                       );
          bVar7 = iRam_? != 0;
          (this->fields)._.impulseVectors = pLVar21;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields)._.impulseVectors >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          bVar7 = cRam_? == '\0';
          (this->fields)._._.findWorldObjectParent = 1;
          if (bVar7) {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          return;
        }
      }
    }
    FUN_?();
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* MvCharacterController get_Controller() */

MvCharacterController *
Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_Controller
          (JetPackMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if (pSVar1 != (SmoothCharacterController *)0x0) {
    return (pSVar1->fields).controller;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MvCharacterController *)(*pcVar2)();
  return pMVar3;
}


/* Vector3 get_Impulses() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_Impulses
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  __return_storage_ptr__->x = (pVVar1->zeroVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = (pVVar1->zeroVector).z;
  pLVar3 = (this->fields)._.impulseVectors;
  if (pLVar3 == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pVVar5 = (Vector3 *)(*pcVar4)();
    return pVVar5;
  }
  if ((pLVar3->fields)._size != 0) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
      uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    iStack_12 = (pLVar3->fields)._version;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_7._0_4_ = SUB84(pLVar3,0);
    uStack_7._4_4_ = (undefined4)((ulonglong)pLVar3 >> 0x20);
    uStack_15 = (undefined4)uStack_7;
    uStack_16 = uStack_7._4_4_;
    uStack_17 = 0;
    fStack_18 = 0.0;
    fStack_19 = 0.0;
    fStack_20 = 0.0;
    uStack_21 = 0;
    uStack_7 = 0;
    puStack_22 = &uStack_15;
    while (cVar23 = FUN_?(&uStack_15,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                 ), cVar23 != '\0') {
      uVar24 = __return_storage_ptr__->x;
      uVar25 = __return_storage_ptr__->y;
      __return_storage_ptr__->x = fStack_18 + (float)uVar24;
      __return_storage_ptr__->y = fStack_19 + (float)uVar25;
      __return_storage_ptr__->z = fStack_20 + __return_storage_ptr__->z;
    }
    pLVar3 = (this->fields)._.impulseVectors;
    if (pLVar3 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    piVar26 = &(pLVar3->fields)._version;
    *piVar26 = *piVar26 + 1;
    (pLVar3->fields)._size = 0;
  }
  return __return_storage_ptr__;
}


/* Vector3 get_InputMoveDirection() */

Vector3 * Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_InputMoveDirection
                    (Vector3 *__return_storage_ptr__,JetPackMotor *this,MethodInfo *method)

{
  fVar1 = (this->fields)._InputMoveDirection_k__BackingField.z;
  fVar2 = (this->fields)._InputMoveDirection_k__BackingField.y;
  __return_storage_ptr__->x = (this->fields)._InputMoveDirection_k__BackingField.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
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
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if (pVVar1 == (VehicleEnergyContainer *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pVVar1->fields)._UsingEnergy_k__BackingField == 0) {
    return 0;
  }
  return (pVVar1->fields).energyStorage <= 0.0;
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
  pSVar1 = (this->fields).smoothController;
  if ((pSVar1 == (SmoothCharacterController *)0x0) ||
     (pMVar2 = (pSVar1->fields).controller, pMVar2 == (MvCharacterController *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  uVar5 = (pMVar2->fields)._Velocity_k__BackingField.x;
  uVar6 = (pMVar2->fields)._Velocity_k__BackingField.y;
  fVar7 = (pMVar2->fields)._Velocity_k__BackingField.z;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcRam_? = pcVar3;
  fVar9 = (float)(*pcRam_?)();
  __return_storage_ptr__->x = (float)uVar5 / fVar9;
  __return_storage_ptr__->y = (float)uVar6 / fVar9;
  __return_storage_ptr__->z = fVar7 / fVar9;
  return __return_storage_ptr__;
}


/* Single get_WaterProximity() */

float Assembly-CSharp.dll::JetPackMotor::JetPackMotor_get_WaterProximity
                (JetPackMotor *this,MethodInfo *method)

{
  return (this->fields).waterProximity;
}


/* Void set_InputMoveDirection(Vector3) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_set_InputMoveDirection
               (JetPackMotor *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._InputMoveDirection_k__BackingField.x = value->x;
  (this->fields)._InputMoveDirection_k__BackingField.y = fVar1;
  (this->fields)._InputMoveDirection_k__BackingField.z = fVar2;
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
    FUN_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IMoveHitHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).leaveMode = value;
  if (value != 0) {
    lVar1 = FUN_?((this->fields).interactable,TypeInfo__IMoveHitHandler);
    pIVar2 = TypeInfo__IMoveHitHandler;
    if (lVar1 != 0) {
      pMVar3 = (this->fields).interactable;
      if (pMVar3 == (MVInteractableBase *)0x0) {
        lVar1 = 0;
      }
      else {
        lVar1 = FUN_?(pMVar3,TypeInfo__IMoveHitHandler);
        if (lVar1 == 0) {
          FUN_?(pMVar3,pIVar2);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pSVar5 = (this->fields).smoothController;
      if ((pSVar5 == (SmoothCharacterController *)0x0) ||
         (pMVar6 = (pSVar5->fields).controller, pMVar6 == (MvCharacterController *)0x0)) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pAVar7 = (pMVar6->fields).OnControllerColliderHit;
      pDVar8 = (Delegate *)FUN_?(TypeInfo__System__Action<MVControllerColliderHit>);
      FUN_?(lVar1);
      FUN_?(pDVar8,lVar1);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar7,pDVar8,(MethodInfo *)0x0);
      pAVar9 = TypeInfo__System__Action<MVControllerColliderHit>;
      if (pDVar8 == (Delegate *)0x0) {
        (pMVar6->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
      }
      else {
        pAVar7 = (Action_1_MVControllerColliderHit_ *)
                  FUN_?(pDVar8,TypeInfo__System__Action<MVControllerColliderHit>);
        if (pAVar7 == (Action_1_MVControllerColliderHit_ *)0x0) {
          FUN_?(pDVar8,pAVar9);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pMVar6->fields).OnControllerColliderHit = pAVar7;
        pAVar9 = TypeInfo__System__Action<MVControllerColliderHit>;
        lVar1 = FUN_?(pDVar8,TypeInfo__System__Action<MVControllerColliderHit>);
        if (lVar1 == 0) {
          FUN_?(pDVar8,pAVar9);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&(pMVar6->fields).OnControllerColliderHit >> 0xc);
        lVar1 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar1 + 0xADDR);
          puVar12 = (ulonglong *)(lVar1 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
    }
    bVar13 = iRam_? != 0;
    (this->fields).interactable = (this->fields).vehicleInteractable;
    if (bVar13) {
      uVar10 = (uint)((ulonglong)&(this->fields).interactable >> 0xc);
      lVar1 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar1 + 0xADDR);
        puVar12 = (ulonglong *)(lVar1 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
  }
  return;
}


/* Void set_Thrust(Boolean) */

void Assembly-CSharp.dll::JetPackMotor::JetPackMotor_set_Thrust
               (JetPackMotor *this,bool value,MethodInfo *method)

{
  (this->fields)._Thrust_k__BackingField = value;
  return;
}

