
/* Vector3 ApplyInputVelocityChange() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  fVar1 = (float)FUN_?(&(this->fields).velocity);
  uStack_2._0_4_ = (this->fields)._MoveDirection_k__BackingField.x;
  uStack_2._4_4_ = (this->fields)._MoveDirection_k__BackingField.y;
  fStack_3 = (this->fields)._MoveDirection_k__BackingField.z;
  fVar4 = (float)FUN_?(&uStack_2);
  fVar5 = (this->fields).speedSmoothing;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar6)();
    return pVVar8;
  }
  pcRam_? = pcVar6;
  fVar9 = (float)(*pcRam_?)();
  fVar9 = fVar9 * fVar5;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  else if (_UNK_? < fVar9) {
    fVar9 = _UNK_?;
  }
  fVar5 = (this->fields)._MoveDirection_k__BackingField.z;
  uStack_2._0_4_ = (this->fields)._MoveDirection_k__BackingField.x;
  uStack_2._4_4_ = (this->fields)._MoveDirection_k__BackingField.y;
  fVar1 = fVar1 + (fVar4 - fVar1) * fVar9;
  fStack_3 = fVar5;
  uStack_10 = uStack_2;
  fVar4 = (float)FUN_?(&uStack_2);
  if (_UNK_? < fVar4) {
    fVar5 = fVar5 / fVar4;
    uVar7 = CONCAT44(uStack_10._4_4_ / fVar4,(float)uStack_10 / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7._0_4_ = (pVVar11->zeroVector).x;
    uVar7._4_4_ = (pVVar11->zeroVector).y;
    fVar5 = (pVVar11->zeroVector).z;
  }
  uVar12 = (this->fields).velocity.x;
  uVar13 = (this->fields).velocity.y;
  uStack_2._0_4_ = (float)uVar7;
  uStack_2._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  fVar9 = (float)uStack_2 * fVar1;
  fVar14 = uStack_2._4_4_ * fVar1;
  fVar4 = (this->fields).velocity.z;
  pMVar15 = (this->fields).interactable;
  uStack_2 = uVar7;
  if (pMVar15 == (MVInteractableBase *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar6)();
    return pVVar8;
  }
  fVar16 = (float)(*(pMVar15->klass->vtable).__unknown_8.methodPtr)(pMVar15,0xc);
  fVar16 = fVar16 * fVar16;
  uVar17 = (this->fields).velocity.x;
  uVar18 = (this->fields).velocity.y;
  fVar19 = fVar16 * (fVar9 - (float)uVar12) + (float)uVar17;
  fVar9 = fVar16 * (fVar14 - (float)uVar13) + (float)uVar18;
  fVar5 = fVar16 * (fVar5 * fVar1 - fVar4) + (this->fields).velocity.z;
  (this->fields).velocity.x = fVar19;
  (this->fields).velocity.y = fVar9;
  (this->fields).velocity.z = fVar5;
  __return_storage_ptr__->x = fVar19;
  __return_storage_ptr__->y = fVar9;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Void FixedUpdateFunction() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateFunction
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  VStack_1.x = (this->fields).velocity.x;
  VStack_1.y = (this->fields).velocity.y;
  fVar2 = (this->fields).velocity.z;
  pMVar3 = (this->fields).interactable;
  aVStack_4[0]._0_8_ = VStack_1._0_8_;
  if (pMVar3 == (MVInteractableBase *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar6 = (float)(*(pMVar3->klass->vtable).__unknown_8.methodPtr)
                           (pMVar3,0xc,in_R8,(pMVar3->klass->vtable).__unknown_8.method);
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar6 * VStack_1.x;
  fVar8 = fVar6 * VStack_1.y;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar10 = (float)(*pcRam_?)();
  (this->fields).velocity.x = aVStack_4[0].x - fVar7 * fVar10;
  (this->fields).velocity.y = aVStack_4[0].y - fVar8 * fVar10;
  (this->fields).velocity.z = fVar2 - fVar6 * fVar2 * fVar10;
  pVVar11 = AdvancedGhostMotor_ApplyInputVelocityChange(aVStack_4,this,(MethodInfo *)0x0);
  pMVar3 = (this->fields).interactable;
  aVStack_4[0].z = pVVar11->z;
  aVStack_4[0].x = pVVar11->x;
  aVStack_4[0].y = pVVar11->y;
  (this->fields).velocity.x = aVStack_4[0].x;
  (this->fields).velocity.y = aVStack_4[0].y;
  (this->fields).velocity.z = aVStack_4[0].z;
  pVVar11 = MVRigidBody::MVRigidBody_GetImpulse
                     (&VStack_1,(MVRigidBody *)this,aVStack_4,pMVar3,(MethodInfo *)0x0);
  fVar2 = _UNK_?;
  pMVar3 = (this->fields).interactable;
  aVStack_4[0].z = pVVar11->z;
  aVStack_4[0].x = pVVar11->x;
  aVStack_4[0].y = pVVar11->y;
  (this->fields).velocity.x = aVStack_4[0].x;
  (this->fields).velocity.y = aVStack_4[0].y;
  (this->fields).velocity.z = aVStack_4[0].z;
  MVRigidBody::MVRigidBody_VelocityDamping(&VStack_1,aVStack_4,fVar2,pMVar3,(MethodInfo *)0x0);
  aVStack_4[0].x = (this->fields).velocity.x;
  aVStack_4[0].y = (this->fields).velocity.y;
  aVStack_4[0].z = (this->fields).velocity.z;
  AdvancedGhostMotor_Move(this,aVStack_4,(MethodInfo *)0x0);
  return;
}


/* Void FixedUpdateRotation() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateRotation
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  pTVar1 = (this->fields).targetTransform;
  if (pTVar1 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5);
  uVar7 = (this->fields).prevLocalPosition.x;
  uVar8 = (this->fields).prevLocalPosition.y;
  fVar9 = fStack_4 - (this->fields).prevLocalPosition.z;
  fVar10 = (this->fields).minDeltaPos;
  if (fVar10 * fVar10 <
      (uStack_3._4_4_ - (float)uVar8) * (uStack_3._4_4_ - (float)uVar8) +
      ((float)uStack_3 - (float)uVar7) * ((float)uStack_3 - (float)uVar7) + fVar9 * fVar9) {
    uVar11 = (this->fields).prevLocalPosition.x;
    uVar12 = (this->fields).prevLocalPosition.y;
    fVar10 = fStack_4 - (this->fields).prevLocalPosition.z;
    fVar13 = (float)uStack_3 - (float)uVar11;
    fVar14 = uStack_3._4_4_ - (float)uVar12;
    uStack_15 = CONCAT44(fVar14,fVar13);
    fStack_16 = fVar10;
    fVar9 = (float)FUN_?(&uStack_15);
    if (_UNK_? < fVar9) {
      fVar10 = fVar10 / fVar9;
      uStack_15 = CONCAT44(fVar14 / fVar9,fVar13 / fVar9);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_15._0_4_ = (pVVar17->zeroVector).x;
      uStack_15._4_4_ = (uint)(pVVar17->zeroVector).y;
      fVar10 = (pVVar17->zeroVector).z;
    }
    uVar18 = uStack_15._4_4_;
    fVar13 = (float)(uStack_15._4_4_ & _UNK_?);
    (this->fields).prevLocalPosition.x = (float)uStack_3;
    fVar9 = _UNK_?;
    (this->fields).prevLocalPosition.y = uStack_3._4_4_;
    (this->fields).prevLocalPosition.z = fStack_4;
    if (fVar13 < fVar9) {
      pTVar1 = (this->fields).targetTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_19 = 0;
      uStack_20 = 0;
      pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar5,&uStack_19);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_3._0_4_ = (pVVar17->upVector).x;
      uStack_3._4_4_ = (pVVar17->upVector).y;
      fStack_4 = (pVVar17->upVector).z;
      uStack_15 = CONCAT44(uVar18,(undefined4)uStack_15);
      uStack_21 = 0;
      uStack_22 = 0;
      pcVar2 = pcRam_?;
      fStack_16 = fVar10;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(&uStack_15,&uStack_3,&uStack_21);
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      uStack_23 = (undefined4)uStack_19;
      uStack_24 = uStack_19._4_4_;
      uStack_25 = (undefined4)uStack_20;
      uStack_26 = uStack_20._4_4_;
      uStack_27 = uStack_21;
      uStack_28 = uStack_22;
      uStack_19 = 0;
      uStack_20 = 0;
      fVar10 = (float)(*pcRam_?)();
      fVar10 = (fVar10 / _UNK_?) * _UNK_?;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(&uStack_23,&uStack_27,fVar10,&uStack_19);
      uStack_21 = uStack_19;
      uStack_22 = uStack_20;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar5,&uStack_21);
    }
  }
  return;
}


/* Void FrameUpdate() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_FrameUpdate
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  obj = (this->fields).smoothPhysicsMovement;
  if (obj == (SmoothPhysicsMovement *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
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
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      bVar7 = iRam_? != 0;
      (obj->fields).current = pSVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
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
    }
    if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (obj->fields).next = pSVar6;
      func_?(&(obj->fields).next);
    }
  }
  if (((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  pSVar6 = (obj->fields).next;
  do {
    if (fVar3 - fVar4 < (pSVar6->fields).time) {
code_?:
      pSVar6 = (obj->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar12 = (pSVar6->fields).time;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar13 = (float)(*pcRam_?)();
      fVar13 = ((fVar3 - fVar4) - fVar12) / fVar13;
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
      pvVar14 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
DAT_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      pvVar14 = (void *)(*pcRam_?)(pvVar14);
      pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar14,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      fVar3 = _UNK_?;
      pSVar6 = (obj->fields).current;
      if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
         (pSVar16 = (obj->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
      uStack_17._0_4_ = (pSVar16->fields).position.x;
      uStack_17._4_4_ = (pSVar16->fields).position.y;
      QStack_18.x = (pSVar6->fields).position.x;
      QStack_18.y = (pSVar6->fields).position.y;
      if (fVar13 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = _UNK_?;
        if (fVar13 <= _UNK_?) {
          fVar4 = fVar13;
        }
      }
      if (pOVar15 != (Object *)0x0) {
        QStack_18.y = ((float)uStack_17._4_4_ - QStack_18.y) * fVar4 + QStack_18.y;
        QStack_18.x = ((float)(undefined4)uStack_17 - QStack_18.x) * fVar4 + QStack_18.x;
        QStack_18.z = ((pSVar16->fields).position.z - (pSVar6->fields).position.z) * fVar4 +
                      (pSVar6->fields).position.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar19 = pOVar15[1].klass;
        if (pOVar19 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pOVar19);
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
        pvVar14 = (obj->fields)._._._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        pvVar14 = (void *)(*pcRam_?)(pvVar14);
        pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar14,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        pSVar6 = (obj->fields).current;
        if ((pSVar6 != (SmoothPhysicsMovement_Package *)0x0) &&
           (pSVar16 = (obj->fields).next, pSVar16 != (SmoothPhysicsMovement_Package *)0x0)) {
          uStack_20._0_4_ = (pSVar16->fields).rotation.x;
          uStack_20._4_4_ = (pSVar16->fields).rotation.y;
          uStack_21._0_4_ = (pSVar16->fields).rotation.z;
          uStack_21._4_4_ = (pSVar16->fields).rotation.w;
          QStack_22.x = (pSVar6->fields).rotation.x;
          QStack_22.y = (pSVar6->fields).rotation.y;
          QStack_22.z = (pSVar6->fields).rotation.z;
          QStack_22.w = (pSVar6->fields).rotation.w;
          uStack_17 = 0;
          uStack_23 = 0;
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          (*pcRam_?)(&QStack_22,&uStack_20,fVar13,&uStack_17);
          if (pOVar15 == (Object *)0x0) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uStack_24 = (undefined4)uStack_17;
          uStack_25 = uStack_17._4_4_;
          uStack_26 = (float)uStack_23;
          uStack_27 = uStack_23._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar19 = pOVar15[1].klass;
          if (pOVar19 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          (*pcRam_?)(pOVar19);
          if ((obj->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
            pSVar6 = (obj->fields).current;
            pMVar28 = (obj->fields).worldObjectOwner;
            if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar16 = (obj->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
            uVar29 = (pSVar16->fields).position.x;
            uVar30 = (pSVar16->fields).position.y;
            uStack_17._0_4_ = (pSVar6->fields).position.x;
            uStack_17._4_4_ = (pSVar6->fields).position.y;
            if (fVar13 < 0.0) {
              fVar3 = 0.0;
            }
            else if (fVar13 <= fVar3) {
              fVar3 = fVar13;
            }
            QStack_18.z = ((pSVar16->fields).position.z - (pSVar6->fields).position.z) * fVar3 +
                          (pSVar6->fields).position.z;
            QStack_18.y = ((float)uVar30 - (float)uStack_17._4_4_) * fVar3 + (float)uStack_17._4_4_;
            QStack_18.x = ((float)uVar29 - (float)(undefined4)uStack_17) * fVar3 +
                          (float)(undefined4)uStack_17;
            (*(pMVar28->klass->vtable).set_WorldPosition.methodPtr)(pMVar28,&QStack_18);
            pSVar6 = (obj->fields).current;
            pMVar28 = (obj->fields).worldObjectOwner;
            if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar16 = (obj->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
            QStack_22.x = (pSVar16->fields).rotation.x;
            QStack_22.y = (pSVar16->fields).rotation.y;
            QStack_22.z = (pSVar16->fields).rotation.z;
            QStack_22.w = (pSVar16->fields).rotation.w;
            uStack_20._0_4_ = (pSVar6->fields).rotation.x;
            uStack_20._4_4_ = (pSVar6->fields).rotation.y;
            uStack_21._0_4_ = (pSVar6->fields).rotation.z;
            uStack_21._4_4_ = (pSVar6->fields).rotation.w;
            QStack_18.x = 0.0;
            QStack_18.y = 0.0;
            QStack_18.z = 0.0;
            QStack_18.w = 0.0;
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(&uStack_20,&QStack_22,fVar13,&QStack_18);
            if (pMVar28 == (MVWorldObjectClient *)0x0) break;
            QStack_22.x = QStack_18.x;
            QStack_22.y = QStack_18.y;
            QStack_22.z = QStack_18.z;
            QStack_22.w = QStack_18.w;
            MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                      (pMVar28,&QStack_22,(MethodInfo *)0x0);
          }
          if ((obj->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
            return;
          }
          pCVar31 = (obj->fields).cullingSubscriberBase;
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
          pvVar14 = (obj->fields)._._._._.m_CachedPtr;
          if (pvVar14 == (void *)0x0) goto DAT_?;
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          pvVar14 = (void *)(*pcRam_?)(pvVar14);
          pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar14,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar15 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_17 = 0;
            uStack_23 = uStack_23 & 0xffffffff00000000;
            pOVar19 = pOVar15[1].klass;
            if (pOVar19 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(pOVar19,&uStack_17);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CullingApiWrapper);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__CullingApiWrapper);
            }
            pBVar32 = TypeInfo__CullingApiWrapper->static_fields->spheres;
            if (pBVar32 != (BoundingSphere__Array *)0x0) {
              uVar8 = (pCVar31->fields)._CullingIndex_k__BackingField;
              if (uVar8 < (uint)pBVar32->max_length) {
                pBVar32->vector[(int)uVar8].position.x = (float)(undefined4)uStack_17;
                pBVar32->vector[(int)uVar8].position.y = (float)uStack_17._4_4_;
                pBVar32->vector[(int)uVar8].position.z = (float)uStack_23;
                return;
              }
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          break;
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    if ((pQVar5->fields)._size < 1) goto code_?;
    bVar7 = iRam_? != 0;
    (obj->fields).current = (obj->fields).next;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
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
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar6 = (SmoothPhysicsMovement_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    bVar7 = iRam_? != 0;
    (obj->fields).next = pSVar6;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(obj->fields).next >> 0xc);
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
    pSVar6 = (obj->fields).next;
  } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Vector3 GetDesiredHorizontalVelocity() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_GetDesiredHorizontalVelocity
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  fVar1 = (float)FUN_?(&(this->fields).velocity);
  uStack_2._0_4_ = (this->fields)._MoveDirection_k__BackingField.x;
  uStack_2._4_4_ = (this->fields)._MoveDirection_k__BackingField.y;
  fStack_3 = (this->fields)._MoveDirection_k__BackingField.z;
  fVar4 = (float)FUN_?(&uStack_2);
  fVar5 = (this->fields).speedSmoothing;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar6)();
    return pVVar8;
  }
  pcRam_? = pcVar6;
  fVar9 = (float)(*pcRam_?)();
  fVar9 = fVar9 * fVar5;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  else if (_UNK_? < fVar9) {
    fVar9 = _UNK_?;
  }
  fVar5 = (this->fields)._MoveDirection_k__BackingField.z;
  uStack_2._0_4_ = (this->fields)._MoveDirection_k__BackingField.x;
  uStack_2._4_4_ = (this->fields)._MoveDirection_k__BackingField.y;
  fVar1 = fVar1 + (fVar4 - fVar1) * fVar9;
  fStack_3 = fVar5;
  uStack_10 = uStack_2;
  fVar4 = (float)FUN_?(&uStack_2);
  if (_UNK_? < fVar4) {
    fVar5 = fVar5 / fVar4;
    uVar7 = CONCAT44(uStack_10._4_4_ / fVar4,(float)uStack_10 / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7._0_4_ = (pVVar11->zeroVector).x;
    uVar7._4_4_ = (pVVar11->zeroVector).y;
    fVar5 = (pVVar11->zeroVector).z;
  }
  uStack_2._0_4_ = (float)uVar7;
  uStack_2._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->x = (float)uStack_2 * fVar1;
  __return_storage_ptr__->y = uStack_2._4_4_ * fVar1;
  __return_storage_ptr__->z = fVar5 * fVar1;
  return __return_storage_ptr__;
}


/* Void Init(GameObject, MVInteractableBase, CullingSubscriberBase) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_Init
               (AdvancedGhostMotor *this,GameObject *ghostBehaviour,MVInteractableBase *interactable
               ,CullingSubscriberBase *cullingSubscriberBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__physics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._.weight = 0.7;
  (this->fields).interactable = interactable;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).interactable >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((ghostBehaviour != (GameObject *)0x0) &&
     (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (ghostBehaviour,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pTVar6->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar7);
    (this->fields).baseHeight = 0.0;
    pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)ghostBehaviour,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar10,StringLiteral__physics,(MethodInfo *)0x0);
    self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (self,pSVar10,(MethodInfo *)0x0);
    if (self != (GameObject *)0x0) {
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (self,(MethodInfo *)0x0);
      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (ghostBehaviour,(MethodInfo *)0x0);
      if ((pTVar11 != (Transform *)0x0) &&
         (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar11,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar6,pTVar11,(MethodInfo *)0x0);
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (self,(MethodInfo *)0x0);
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (ghostBehaviour,(MethodInfo *)0x0);
        if (pTVar11 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (pTVar11->fields)._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar7);
          if (pTVar6 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar7 = (pTVar6->fields)._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar7);
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (self,(MethodInfo *)0x0);
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (ghostBehaviour,(MethodInfo *)0x0);
            if (pTVar11 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar7 = (pTVar11->fields)._._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar7);
              if (pTVar6 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar7 = (pTVar6->fields)._._.m_CachedPtr;
                if (pvVar7 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
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
                (*pcRam_?)(pvVar7);
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(self,(MethodInfo *)0x0);
                bVar1 = iRam_? != 0;
                (this->fields).targetTransform = pTVar6;
                if (bVar1) {
                  uVar2 = (uint)((ulonglong)&(this->fields).targetTransform >> 0xc);
                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                    LOCK();
                    bVar1 = uVar4 == *puVar5;
                    if (bVar1) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar1);
                }
                pSVar12 = (SmoothPhysicsMovement *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_AddComponent_1
                                   (ghostBehaviour,
                                    SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                                   );
                bVar1 = iRam_? != 0;
                (this->fields).smoothPhysicsMovement = pSVar12;
                if (bVar1) {
                  uVar2 = (uint)((ulonglong)&(this->fields).smoothPhysicsMovement >> 0xc);
                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                    LOCK();
                    bVar1 = uVar4 == *puVar5;
                    if (bVar1) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar1);
                }
                pSVar12 = (this->fields).smoothPhysicsMovement;
                if (pSVar12 != (SmoothPhysicsMovement *)0x0) {
                  SmoothPhysicsMovement::SmoothPhysicsMovement_Init
                            (pSVar12,(this->fields).targetTransform,cullingSubscriberBase,
                             (MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
                  return;
                }
              }
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Move(Vector3) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_Move
               (AdvancedGhostMotor *this,Vector3 *velocity,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  uStack_4._0_4_ = velocity->x;
  uStack_4._4_4_ = velocity->y;
  fVar5 = velocity->z;
  fVar6 = (float)uStack_4._4_4_ * fVar3;
  fVar7 = (float)(undefined4)uStack_4 * fVar3;
  obj = (this->fields).targetTransform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar8 = (obj->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar8);
  fStack_9 = fVar5 * fVar3 + 0.0;
  uStack_4 = CONCAT44(fVar6 + 0.0,fVar7 + 0.0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar8 = (obj->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar8,&uStack_4);
  return;
}


/* Void Reset(Vector3) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_Reset
               (AdvancedGhostMotor *this,Vector3 *velocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._.impulseVectors;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    fVar3 = velocity->y;
    this_01 = (this->fields).smoothPhysicsMovement;
    fVar4 = velocity->z;
    (this->fields).velocity.x = velocity->x;
    (this->fields).velocity.y = fVar3;
    (this->fields).velocity.z = fVar4;
    if (this_01 != (SmoothPhysicsMovement *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                      ,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                (this_01->fields).packages;
      if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::
        Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
        Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                  (this_00,
                   MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                  );
        iVar5 = iRam_?;
        (this_01->fields).current = (SmoothPhysicsMovement_Package *)0x0;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)&(this_01->fields).current >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar5 = iRam_?;
          } while (!bVar10);
        }
        (this_01->fields).next = (SmoothPhysicsMovement_Package *)0x0;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)&(this_01->fields).next >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pTVar11 = (this_01->fields).targetTransform;
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (pTVar12 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar13 = (pTVar12->fields)._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcVar14 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcRam_? = pcVar14;
          (*pcRam_?)(pvVar13);
          if (pTVar11 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar13 = (pTVar11->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar13);
            pTVar11 = (this_01->fields).targetTransform;
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_01,(MethodInfo *)0x0);
            if (pTVar12 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar13 = (pTVar12->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              (*pcRam_?)(pvVar13);
              if (pTVar11 == (Transform *)0x0) {
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              uStack_16 = 0;
              uStack_17 = 0;
              uStack_18 = 0;
              uStack_19 = 0;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar13 = (pTVar11->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              (*pcRam_?)(pvVar13,&uStack_16);
              return;
            }
          }
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateVelocity() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_UpdateVelocity
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  VStack_1.x = (this->fields).velocity.x;
  VStack_1.y = (this->fields).velocity.y;
  fVar2 = (this->fields).velocity.z;
  pMVar3 = (this->fields).interactable;
  aVStack_4[0]._0_8_ = VStack_1._0_8_;
  if (pMVar3 == (MVInteractableBase *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar6 = (float)(*(pMVar3->klass->vtable).__unknown_8.methodPtr)
                           (pMVar3,0xc,in_R8,(pMVar3->klass->vtable).__unknown_8.method);
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar6 * VStack_1.x;
  fVar8 = fVar6 * VStack_1.y;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar10 = (float)(*pcRam_?)();
  (this->fields).velocity.x = aVStack_4[0].x - fVar7 * fVar10;
  (this->fields).velocity.y = aVStack_4[0].y - fVar8 * fVar10;
  (this->fields).velocity.z = fVar2 - fVar6 * fVar2 * fVar10;
  pVVar11 = AdvancedGhostMotor_ApplyInputVelocityChange(aVStack_4,this,(MethodInfo *)0x0);
  pMVar3 = (this->fields).interactable;
  aVStack_4[0].z = pVVar11->z;
  aVStack_4[0].x = pVVar11->x;
  aVStack_4[0].y = pVVar11->y;
  (this->fields).velocity.x = aVStack_4[0].x;
  (this->fields).velocity.y = aVStack_4[0].y;
  (this->fields).velocity.z = aVStack_4[0].z;
  pVVar11 = MVRigidBody::MVRigidBody_GetImpulse
                     (&VStack_1,(MVRigidBody *)this,aVStack_4,pMVar3,(MethodInfo *)0x0);
  fVar2 = _UNK_?;
  pMVar3 = (this->fields).interactable;
  aVStack_4[0].z = pVVar11->z;
  aVStack_4[0].x = pVVar11->x;
  aVStack_4[0].y = pVVar11->y;
  (this->fields).velocity.x = aVStack_4[0].x;
  (this->fields).velocity.y = aVStack_4[0].y;
  (this->fields).velocity.z = aVStack_4[0].z;
  MVRigidBody::MVRigidBody_VelocityDamping(&VStack_1,aVStack_4,fVar2,pMVar3,(MethodInfo *)0x0);
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
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
  pMVar1 = (MVGroundState *)FUN_?(TypeInfo__MVGroundState);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
  bVar3 = iRam_? != 0;
  (pMVar1->fields).groundMaterial = pMVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pMVar1->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_8 = (ulonglong)uVar4 << 0x20;
  uVar9 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  bVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uStack_11._0_2_ = (ushort)(bVar10 != 0) << 8;
  uStack_11 = (uint)CONCAT12(1,(short)uStack_11);
  bVar3 = cRam_? == '\0';
  (pMVar1->fields).grounded.currentCryptoKey = uVar9;
  *(undefined3 *)&(pMVar1->fields).grounded.field_0x1 = lStack_8._1_3_;
  (pMVar1->fields).grounded.hiddenValue = lStack_8._4_4_;
  (pMVar1->fields).grounded.fakeValue = (undefined1)uStack_11;
  (pMVar1->fields).grounded.fakeValueChanged = uStack_11._1_1_;
  (pMVar1->fields).grounded.inited = uStack_11._2_1_;
  (pMVar1->fields).grounded.field_0xb = uStack_11._3_1_;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = iRam_? != 0;
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar13 = (pVVar12->zeroVector).y;
  fVar14 = (pVVar12->zeroVector).z;
  (pMVar1->fields).groundNormal.x = (pVVar12->zeroVector).x;
  (pMVar1->fields).groundNormal.y = fVar13;
  (pMVar1->fields).groundNormal.z = fVar14;
  (this->fields)._.groundState = pMVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.groundState >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  (this->fields)._.weight = 1.0;
  (this->fields)._.density = 1.0;
  (this->fields)._.isPlayerControlled = 1;
  pLVar15 = (List_1_UnityEngine_Vector3_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(pLVar15,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
               );
  bVar3 = iRam_? != 0;
  (this->fields)._.impulseVectors = pLVar15;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.impulseVectors >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = cRam_? == '\0';
  (this->fields)._._.findWorldObjectParent = 1;
  if (bVar3) {
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


/* Boolean get_Grounded() */

bool Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_get_Grounded
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  obj = (this->fields).targetTransform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  return uStack_3._4_4_ <= (this->fields).baseHeight;
}


/* Boolean get_IsMovementLocked() */

bool Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_get_IsMovementLocked
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__AdvancedGhostMotor__get_IsMovementLocked__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Vector3 get_MoveDirection() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_get_MoveDirection
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  fVar1 = (this->fields)._MoveDirection_k__BackingField.z;
  fVar2 = (this->fields)._MoveDirection_k__BackingField.y;
  __return_storage_ptr__->x = (this->fields)._MoveDirection_k__BackingField.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void set_IsMovementLocked(Boolean) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_set_IsMovementLocked
               (AdvancedGhostMotor *this,bool value,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__AdvancedGhostMotor__set_IsMovementLocked_bool_);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MoveDirection(Vector3) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_set_MoveDirection
               (AdvancedGhostMotor *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._MoveDirection_k__BackingField.x = value->x;
  (this->fields)._MoveDirection_k__BackingField.y = fVar1;
  (this->fields)._MoveDirection_k__BackingField.z = fVar2;
  return;
}

