
/* Vector3 ApplyInputVelocityChange() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  pVVar1 = &(this->fields).velocity;
  fVar2 = (float10)func_?(pVVar1,0);
  uVar3 = (this->fields)._MoveDirection_k__BackingField.x;
  uVar4 = (this->fields)._MoveDirection_k__BackingField.y;
  fStack_5 = (this->fields)._MoveDirection_k__BackingField.z;
  fStack_6 = (float)uVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar7 = (double)(fStack_6 * fStack_6 + (float)uVar3 * (float)uVar3 + fStack_5 * fStack_5);
  if (dVar7 < 0.0) {
    func_?();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
  ;
  fStack_8 = fStack_8 * (float)fVar2;
  fVar9 = 0.0;
  if ((fStack_8 < 0.0) || (fVar9 = _UNK_?, _UNK_? < fStack_8)) {
    fStack_8 = fVar9;
  }
  fStack_10 = (this->fields)._MoveDirection_k__BackingField.z;
  uVar11 = (this->fields)._MoveDirection_k__BackingField.x;
  uVar12 = (this->fields)._MoveDirection_k__BackingField.y;
  fStack_6 = (float)uVar11;
  fStack_5 = (float)uVar12;
  iVar13 = func_?(afStack_14,&fStack_6,0);
  fVar9 = *(float *)(iVar13 + 8);
  uVar15 = pVVar1->x;
  uVar16 = pVVar1->y;
  fVar17 = (this->fields).velocity.z;
  _fStack_18 = CONCAT44(afStack_14[0],fVar17);
  pMVar18 = (this->fields).interactable;
  fStack_6 = (float)uVar15;
  fStack_5 = (float)uVar16;
  if (pMVar18 != (MVInteractableBase *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar18->klass->vtable).__unknown_6.method)
                                (pMVar18,0xc,(this->fields).ghostFriction,
                                 (pMVar18->klass->vtable).__unknown_7.methodPtr);
    fVar19 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
             Easing_InQuad((float)fVar2,(MethodInfo *)0x0);
    uVar20 = pVVar1->x;
    uVar21 = pVVar1->y;
    fVar22 = (float)uVar20 +
             (fVar9 * ((fStack_23 - (float)dVar7) * fStack_8 + (float)dVar7) - fVar17) * fVar19;
    fVar9 = (this->fields).velocity.z + fStack_5 * fVar19;
    fVar17 = (float)uVar21 + (float)fVar2 * fVar19;
    pVVar1->x = fVar22;
    pVVar1->y = fVar17;
    (this->fields).velocity.z = fVar9;
    __return_storage_ptr__->x = fVar22;
    __return_storage_ptr__->y = fVar17;
    __return_storage_ptr__->z = fVar9;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar24)();
  return pVVar1;
}


/* Void FixedUpdateFunction() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateFunction
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  uVar1._0_4_ = (this->fields).velocity.x;
  uVar1._4_4_ = (this->fields).velocity.y;
  fVar2 = (this->fields).velocity.z;
  pMVar3 = (this->fields).interactable;
  VStack_4._0_8_ = uVar1;
  VStack_4.z = fVar2;
  if (pMVar3 != (MVInteractableBase *)0x0) {
    fVar5 = (float10)(*(code *)(pMVar3->klass->vtable).__unknown_6.method)
                                (pMVar3,0xc,(this->fields).ghostFriction,
                                 (pMVar3->klass->vtable).__unknown_7.methodPtr);
    fStack_6 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
                Easing_InQuad((float)fVar5,(MethodInfo *)0x0);
    fStack_7 = VStack_4.x * fStack_6;
    fStack_8 = VStack_4.y * fStack_6;
    fStack_6 = VStack_4.z * fStack_6;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).velocity.x = (float)uVar1 - fVar9 * fStack_7;
    (this->fields).velocity.y = uVar1._4_4_ - fVar9 * fStack_8;
    (this->fields).velocity.z = fVar2 - fStack_6 * fVar9;
    pVVar10 = AdvancedGhostMotor_ApplyInputVelocityChange
                       ((Vector3 *)&stack0xffffffd8,this,(MethodInfo *)0x0);
    uVar1._4_4_ = pVVar10->y;
    uVar1._0_4_ = pVVar10->z;
    VVar11 = *pVVar10;
    pMVar3 = (this->fields).interactable;
    (this->fields).velocity.x = pVVar10->x;
    (this->fields).velocity.y = uVar1._4_4_;
    (this->fields).velocity.z = (float)uVar1;
    pVVar10 = MVRigidBody::MVRigidBody_GetImpulse
                       ((Vector3 *)&stack0xffffffd8,(MVRigidBody *)this,VVar11,pMVar3,
                        (MethodInfo *)0x0);
    uVar1._4_4_ = pVVar10->y;
    uVar1._0_4_ = pVVar10->z;
    VVar11 = *pVVar10;
    pMVar3 = (this->fields).interactable;
    (this->fields).velocity.x = pVVar10->x;
    (this->fields).velocity.y = uVar1._4_4_;
    (this->fields).velocity.z = (float)uVar1;
    MVRigidBody::MVRigidBody_VelocityDamping
              ((Vector3 *)&stack0xffffffd8,VVar11,1.0,pMVar3,(MethodInfo *)0x0);
    fVar2 = (this->fields).velocity.x;
    fVar9 = (this->fields).velocity.y;
    uVar1._0_4_ = (this->fields).velocity.z;
    uVar1._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
    fStack_6 = fVar9 * uVar1._4_4_;
    fStack_8 = (float)uVar1 * uVar1._4_4_;
    this_00 = (this->fields).targetTransform;
    if (this_00 != (Transform *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_4,this_00,(MethodInfo *)0x0);
      uVar12 = pVVar10->x;
      uVar13 = pVVar10->y;
      VVar11.y = (float)uVar13 + fStack_6;
      VVar11.x = (float)uVar12 + fVar2 * uVar1._4_4_;
      VVar11.z = pVVar10->z + fStack_8;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,VVar11,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void FixedUpdateRotation() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateRotation
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  pTVar1 = (this->fields).targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    uVar6 = (this->fields).prevLocalPosition.x;
    uVar7 = (this->fields).prevLocalPosition.y;
    fVar8 = fVar5 - (this->fields).prevLocalPosition.z;
    fVar9 = (this->fields).minDeltaPos;
    if (fVar9 * fVar9 <
        ((float)uVar4 - (float)uVar7) * ((float)uVar4 - (float)uVar7) +
        ((float)uVar3 - (float)uVar6) * ((float)uVar3 - (float)uVar6) + fVar8 * fVar8) {
      pVVar2 = (Vector3 *)func_?(&stack0xffffffcc,&stack0xffffffdc);
      uVar10 = pVVar2->y;
      forward = *pVVar2;
      fVar8 = (float)(uVar10 & _UNK_?);
      (this->fields).prevLocalPosition.x = (float)uVar3;
      fVar9 = _UNK_?;
      (this->fields).prevLocalPosition.y = (float)uVar4;
      (this->fields).prevLocalPosition.z = fVar5;
      if (fVar8 < fVar9) {
        pTVar1 = (this->fields).targetTransform;
        if (pTVar1 == (Transform *)0x0) goto code_?;
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                            ((Quaternion *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
        fVar9 = pQVar11->w;
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                            ((Quaternion *)&stack0xffffffc8,forward,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)pQVar11->x;
        fVar5 = pQVar11->y;
        fVar8 = pQVar11->z;
        fVar12 = pQVar11->w;
        fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime(method_00)
        ;
        fVar13 = (fVar13 / _UNK_?) * _UNK_?;
        a.y = fVar13;
        a.x = fVar12;
        a.z = 0.0;
        a.w = fVar9;
        b.y = fVar5;
        b.x = (float)method_00;
        b.z = fVar8;
        b.w = fVar12;
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffc8,a,b,fVar13,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar1,*pQVar11,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void FrameUpdate() */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_FrameUpdate
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  this_01 = (this->fields).smoothPhysicsMovement;
  if (this_01 == (SmoothPhysicsMovement *)0x0) {
code_?:
    func_?();
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
  ppSVar4 = &(this_01->fields).current;
  ppSVar5 = (SmoothPhysicsMovement_Package **)(fVar2 - fVar3);
  if ((this_01->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (this_01->fields).packages;
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
  ppSVar8 = &(this_01->fields).next;
  if ((this_01->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (this_01->fields).packages;
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
    pSVar7 = (this_01->fields).next;
    ppSVar8 = &(this_01->fields).next;
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
          this = (AdvancedGhostMotor *)
                 (((pSVar12->fields).position.z - fVar2) * (float)pCVar15 + fVar2);
          fVar16 = ((float)uVar14 - (float)uVar11) * (float)pCVar15 + (float)uVar11;
          fVar17 = ((float)uVar13 - (float)uVar10) * (float)pCVar15 + (float)uVar10;
          VVar18 = (Vector3)CONCAT84(VVar18._0_8_,fVar17);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar9,VVar18,(MethodInfo *)0x0);
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0);
          if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
             (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) break;
          t = &UNK_?;
          pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                              ((Quaternion *)&stack0xffffffcc,((*ppSVar4)->fields).rotation,
                               ((*ppSVar8)->fields).rotation,(float)pTVar9,(MethodInfo *)0x0);
          if (this_02 == (Transform *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (this_02,*pQVar19,(MethodInfo *)0x0);
          pMVar20 = (this_01->fields).worldObjectOwner;
          if (pMVar20 != (MVWorldObjectClient *)0x0) {
            if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
               (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) break;
            (*(code *)(pMVar20->klass->vtable).set_WorldPosition.method)();
            pMVar20 = (this_01->fields).worldObjectOwner;
            if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
               ((*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0 ||
                (pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                     ((Quaternion *)&stack0xffffffcc,((*ppSVar4)->fields).rotation,
                                      ((*ppSVar8)->fields).rotation,(float)t,(MethodInfo *)0x0),
                pMVar20 == (MVWorldObjectClient *)0x0)))) break;
            MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar20,*pQVar19,(MethodInfo *)0x0)
            ;
          }
          this_00 = (this_01->fields).cullingSubscriberBase;
          if (this_00 == (CullingSubscriberBase *)0x0) {
            return;
          }
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (pTVar9 != (Transform *)0x0) {
            pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
            uVar22 = pVVar21->x;
            uVar23 = pVVar21->y;
            this = (AdvancedGhostMotor *)pVVar21->z;
            fVar16 = (float)uVar23;
            fVar24 = (float)uVar22;
            VVar18 = (Vector3)CONCAT84(VVar18._0_8_,fVar24);
            CullingSubscriberBase::CullingSubscriberBase_set_Position
                      (this_00,VVar18,(MethodInfo *)0x0);
            return;
          }
          break;
        }
        pQVar6 = (this_01->fields).packages;
        if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
        if ((pQVar6->fields)._size < 1) goto code_?;
        *ppSVar4 = *ppSVar8;
        func_?();
        pQVar6 = (this_01->fields).packages;
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


/* Vector3 GetDesiredHorizontalVelocity() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_GetDesiredHorizontalVelocity
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  fVar1 = (float10)func_?(&(this->fields).velocity,0);
  uVar2 = (this->fields)._MoveDirection_k__BackingField.x;
  uVar3 = (this->fields)._MoveDirection_k__BackingField.y;
  fStack_4 = (this->fields)._MoveDirection_k__BackingField.z;
  fStack_5 = (float)uVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar6 = (double)(fStack_5 * fStack_5 + (float)uVar2 * (float)uVar2 + fStack_4 * fStack_4);
  if (dVar6 < 0.0) {
    func_?();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
  ;
  fStack_7 = fStack_7 * (float)fVar1;
  fVar8 = 0.0;
  if ((fStack_7 < 0.0) || (fVar8 = _UNK_?, _UNK_? < fStack_7)) {
    fStack_7 = fVar8;
  }
  fStack_9 = (this->fields)._MoveDirection_k__BackingField.z;
  uVar10 = (this->fields)._MoveDirection_k__BackingField.x;
  uVar11 = (this->fields)._MoveDirection_k__BackingField.y;
  fStack_5 = (float)uVar10;
  fStack_4 = (float)uVar11;
  puVar12 = (undefined8 *)func_?(auStack_13,&fStack_5,0);
  fVar8 = *(float *)(puVar12 + 1);
  fStack_5 = (float)*puVar12;
  fStack_4 = (float)((ulonglong)*puVar12 >> 0x20);
  fVar14 = ((float)uVar2 - (float)dVar6) * fStack_7 + (float)dVar6;
  __return_storage_ptr__->x = fStack_5 * fVar14;
  __return_storage_ptr__->y = fStack_4 * fVar14;
  __return_storage_ptr__->z = fVar8 * fVar14;
  return __return_storage_ptr__;
}


/* Void Init(GameObject, MVInteractableBase, CullingSubscriberBase) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_Init
               (AdvancedGhostMotor *this,GameObject *ghostBehaviour,MVInteractableBase *interactable
               ,CullingSubscriberBase *cullingSubscriberBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral__physics);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields).interactable;
  (this->fields)._.weight = 0.7;
  *ppMVar1 = interactable;
  func_?(ppMVar1,interactable);
  if (ghostBehaviour != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (ghostBehaviour,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
      (this->fields).baseHeight = pVVar3->y;
      pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)ghostBehaviour,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar5,StringLiteral__physics,(MethodInfo *)0x0);
      this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,pSVar5,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (ghostBehaviour,(MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar6,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar2,pTVar6,(MethodInfo *)0x0);
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_00,(MethodInfo *)0x0);
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (ghostBehaviour,(MethodInfo *)0x0);
            if (pTVar6 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)(auStack_4 + 4),pTVar6,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar2,*pVVar3,(MethodInfo *)0x0);
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(this_00,(MethodInfo *)0x0);
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(ghostBehaviour,(MethodInfo *)0x0);
                if (pTVar6 != (Transform *)0x0) {
                  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation((Quaternion *)auStack_4,pTVar6,(MethodInfo *)0x0)
                  ;
                  if (pTVar2 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar2,*pQVar7,(MethodInfo *)0x0);
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(this_00,(MethodInfo *)0x0);
                    ppTVar8 = &(this->fields).targetTransform;
                    *ppTVar8 = pTVar2;
                    func_?(ppTVar8,pTVar2);
                    pSVar9 = (SmoothPhysicsMovement *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_1
                                        (ghostBehaviour,
                                         SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                                        );
                    ppSVar10 = &(this->fields).smoothPhysicsMovement;
                    *ppSVar10 = pSVar9;
                    func_?(ppSVar10,pSVar9);
                    if (*ppSVar10 != (SmoothPhysicsMovement *)0x0) {
                      SmoothPhysicsMovement::SmoothPhysicsMovement_Init
                                (*ppSVar10,(this->fields).targetTransform,cullingSubscriberBase,
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
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Move(Vector3) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_Move
               (AdvancedGhostMotor *this,Vector3 velocity,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  this_00 = (this->fields).targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    value.y = (float)uVar4 + velocity.y * fVar1;
    value.x = (float)uVar3 + velocity.x * fVar1;
    value.z = pVVar2->z + velocity.z * fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  uVar1._0_4_ = (this->fields).velocity.x;
  uVar1._4_4_ = (this->fields).velocity.y;
  fVar2 = (this->fields).velocity.z;
  pMVar3 = (this->fields).interactable;
  if (pMVar3 != (MVInteractableBase *)0x0) {
    uVar4 = uVar1;
    fVar5 = fVar2;
    fVar6 = (float10)(*(code *)(pMVar3->klass->vtable).__unknown_6.method)
                               (pMVar3,0xc,(this->fields).ghostFriction,
                                (pMVar3->klass->vtable).__unknown_7.methodPtr);
    fVar7 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
             Easing_InQuad((float)fVar6,(MethodInfo *)0x0);
    fVar8 = (float)uVar4 * fVar7;
    fVar9 = (float)((ulonglong)uVar4 >> 0x20) * fVar7;
    fVar5 = fVar5 * fVar7;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).velocity.x = (float)uVar1 - fVar8 * fVar7;
    (this->fields).velocity.y = uVar1._4_4_ - fVar9 * fVar7;
    (this->fields).velocity.z = fVar2 - fVar5 * fVar7;
    pVVar10 = AdvancedGhostMotor_ApplyInputVelocityChange
                       ((Vector3 *)&stack0xffffffd8,this,(MethodInfo *)0x0);
    uVar1._4_4_ = pVVar10->y;
    uVar1._0_4_ = pVVar10->z;
    VVar11 = *pVVar10;
    pMVar3 = (this->fields).interactable;
    (this->fields).velocity.x = pVVar10->x;
    (this->fields).velocity.y = uVar1._4_4_;
    (this->fields).velocity.z = (float)uVar1;
    pVVar10 = MVRigidBody::MVRigidBody_GetImpulse
                       ((Vector3 *)&stack0xffffffd8,(MVRigidBody *)this,VVar11,pMVar3,
                        (MethodInfo *)0x0);
    uVar1._4_4_ = pVVar10->y;
    uVar1._0_4_ = pVVar10->z;
    VVar11 = *pVVar10;
    pMVar3 = (this->fields).interactable;
    (this->fields).velocity.x = pVVar10->x;
    (this->fields).velocity.y = uVar1._4_4_;
    (this->fields).velocity.z = (float)uVar1;
    MVRigidBody::MVRigidBody_VelocityDamping
              ((Vector3 *)&stack0xffffffd8,VVar11,1.0,pMVar3,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__MVGroundState);
    cRam_? = '\x01';
  }
  value = (MVGroundState *)func_?(TypeInfo__MVGroundState);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMaterial);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  this_00 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0);
  (value->fields).groundMaterial = this_00;
  func_?(&value->fields,this_00);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit((ObscuredBool *)&stack0xfffffff0,0,(MethodInfo *)0x0);
  uVar2 = *(undefined3 *)&pOVar1->field_0x1;
  iVar3 = pOVar1->hiddenValue;
  bVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->fakeValueChanged;
  bVar6 = pOVar1->inited;
  uVar7 = pOVar1->field_0xb;
  (value->fields).grounded.currentCryptoKey = pOVar1->currentCryptoKey;
  *(undefined3 *)&(value->fields).grounded.field_0x1 = uVar2;
  (value->fields).grounded.hiddenValue = iVar3;
  (value->fields).grounded.fakeValue = bVar4;
  (value->fields).grounded.fakeValueChanged = bVar5;
  (value->fields).grounded.inited = bVar6;
  (value->fields).grounded.field_0xb = uVar7;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->zeroVector).y;
  fVar10 = (pVVar8->zeroVector).z;
  (value->fields).groundNormal.x = (pVVar8->zeroVector).x;
  (value->fields).groundNormal.y = fVar9;
  (value->fields).groundNormal.z = fVar10;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,in_stack_11);
  (this->fields)._.groundState = value;
  func_?();
  (this->fields)._.weight = 1.0;
  (this->fields)._.density = 1.0;
  (this->fields)._.isPlayerControlled = 1;
  this_01 = (List_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  ppLVar12 = &(this->fields)._.impulseVectors;
  *ppLVar12 = this_01;
  func_?(ppLVar12,this_01);
  (this->fields)._._.findWorldObjectParent = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
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
    return pVVar1->y <= (this->fields).baseHeight;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_IsMovementLocked() */

bool Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_get_IsMovementLocked
               (AdvancedGhostMotor *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__AdvancedGhostMotor__get_IsMovementLocked__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void set_IsMovementLocked(Boolean) */

void Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_set_IsMovementLocked
               (AdvancedGhostMotor *this,bool value,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__AdvancedGhostMotor__set_IsMovementLocked_bool_);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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

