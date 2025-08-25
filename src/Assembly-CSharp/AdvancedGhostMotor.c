
/* Vector3 ApplyInputVelocityChange() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  pAVar1 = this;
  fVar2 = (float10)func_?(&(this->fields).velocity,0);
  fStack_3 = (this->fields)._MoveDirection_k__BackingField.z;
  uStack_4._0_4_ = (this->fields)._MoveDirection_k__BackingField.x;
  uStack_4._4_4_ = (this->fields)._MoveDirection_k__BackingField.y;
  fStack_5 = (float)fVar2;
  fVar2 = (float10)func_?(&uStack_4,0);
  fVar6 = (this->fields).speedSmoothing;
  fStack_7 = (float)fVar2;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  this = (AdvancedGhostMotor *)(fVar8 * fVar6);
  pAVar9 = (AdvancedGhostMotor *)0x0;
  if (((float)this < 0.0) || (pAVar9 = _UNK_?, (float)_UNK_? < (float)this)) {
    this = pAVar9;
  }
  fStack_3 = (pAVar1->fields)._MoveDirection_k__BackingField.z;
  uStack_4._0_4_ = (pAVar1->fields)._MoveDirection_k__BackingField.x;
  uStack_4._4_4_ = (pAVar1->fields)._MoveDirection_k__BackingField.y;
  puVar10 = (undefined8 *)func_?(auStack_11,&uStack_4,0);
  uStack_4._0_4_ = (float)*puVar10;
  uStack_4._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
  fVar6 = (fStack_7 - fStack_5) * (float)this + fStack_5;
  fStack_5 = (float)uStack_4 * fVar6;
  fStack_7 = uStack_4._4_4_ * fVar6;
  uStack_4._0_4_ = (pAVar1->fields).velocity.x;
  uStack_4._4_4_ = (pAVar1->fields).velocity.y;
  fStack_3 = (pAVar1->fields).velocity.z;
  fStack_5 = fStack_5 - (float)uStack_4;
  fStack_7 = fStack_7 - uStack_4._4_4_;
  fStack_12 = *(float *)(puVar10 + 1) * fVar6 - fStack_3;
  pMVar13 = (pAVar1->fields).interactable;
  if (pMVar13 != (MVInteractableBase *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar13->klass->vtable).__unknown_8.method)
                               (pMVar13,0xc,(pAVar1->fields).ghostFriction,
                                (pMVar13->klass->vtable).__unknown_9.methodPtr);
    fVar8 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
             Easing_InQuad((float)fVar2,(MethodInfo *)0x0);
    uVar14 = (pAVar1->fields).velocity.x;
    uVar15 = (pAVar1->fields).velocity.y;
    fVar16 = (float)uVar14 + fStack_5 * fVar8;
    fVar6 = (pAVar1->fields).velocity.z + fStack_12 * fVar8;
    fVar8 = (float)uVar15 + fStack_7 * fVar8;
    (pAVar1->fields).velocity.x = fVar16;
    (pAVar1->fields).velocity.y = fVar8;
    (pAVar1->fields).velocity.z = fVar6;
    __return_storage_ptr__->x = fVar16;
    __return_storage_ptr__->y = fVar8;
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pVVar18 = (Vector3 *)(*pcVar17)();
  return pVVar18;
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
    fVar5 = (float10)(*(code *)(pMVar3->klass->vtable).__unknown_8.method)
                                (pMVar3,0xc,(this->fields).ghostFriction,
                                 (pMVar3->klass->vtable).__unknown_9.methodPtr);
    fStack_6 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
                Easing_InQuad((float)fVar5,(MethodInfo *)0x0);
    fStack_7 = VStack_4.x * fStack_6;
    fStack_8 = VStack_4.y * fStack_6;
    fStack_6 = VStack_4.z * fStack_6;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).velocity.x = (float)uVar1 - fStack_7 * fVar9;
    (this->fields).velocity.y = uVar1._4_4_ - fStack_8 * fVar9;
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
  this_00 = (this->fields).smoothPhysicsMovement;
  if (this_00 != (SmoothPhysicsMovement *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar3 = (this_00->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar3->fields)._size) {
        pSVar4 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar3,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        (this_00->fields).current = pSVar4;
        func_?();
      }
      if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
        return;
      }
    }
    if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar3 = (this_00->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar3->fields)._size) {
        pSVar4 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar3,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        (this_00->fields).next = pSVar4;
        func_?();
      }
    }
    if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
       ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
      return;
    }
    pSVar4 = (this_00->fields).next;
    ppSVar5 = &(this_00->fields).next;
    do {
      if (fVar1 < (pSVar4->fields).time) {
code_?:
        pSVar4 = (this_00->fields).current;
        if (pSVar4 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar2 = (pSVar4->fields).time;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar6 = (fVar1 - fVar2) / fVar6;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar4 = (this_00->fields).current;
        if (pSVar4 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar8 = (pSVar4->fields).position.x;
        uVar9 = (pSVar4->fields).position.y;
        pSVar10 = (this_00->fields).next;
        fVar1 = (pSVar4->fields).position.z;
        if (pSVar10 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar11 = (pSVar10->fields).position.x;
        uVar12 = (pSVar10->fields).position.y;
        fVar2 = 0.0;
        if ((0.0 <= fVar6) && (fVar2 = _UNK_?, fVar6 <= _UNK_?)) {
          fVar2 = fVar6;
        }
        if (pTVar7 == (Transform *)0x0) break;
        value.y = ((float)uVar12 - (float)uVar9) * fVar2 + (float)uVar9;
        value.x = ((float)uVar11 - (float)uVar8) * fVar2 + (float)uVar8;
        value.z = ((pSVar10->fields).position.z - fVar1) * fVar2 + fVar1;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar7,value,(MethodInfo *)0x0);
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar4 = (this_00->fields).current;
        if (((pSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
            (pSVar10 = (this_00->fields).next, pSVar10 == (SmoothPhysicsMovement_Package *)0x0)) ||
           (pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                ((Quaternion *)&stack0xffffffdc,(pSVar4->fields).rotation,
                                 (pSVar10->fields).rotation,fVar6,(MethodInfo *)0x0),
           pTVar7 == (Transform *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar7,*pQVar13,(MethodInfo *)0x0);
        if ((this_00->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
          if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
             ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) break;
          (*(code *)(((this_00->fields).worldObjectOwner)->klass->vtable).set_WorldPosition.method)
                    ();
          pSVar4 = (this_00->fields).current;
          this_01 = (this_00->fields).worldObjectOwner;
          if ((pSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
             ((pSVar10 = (this_00->fields).next, pSVar10 == (SmoothPhysicsMovement_Package *)0x0 ||
              (pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                   ((Quaternion *)&stack0xffffffdc,(pSVar4->fields).rotation,
                                    (pSVar10->fields).rotation,fVar6,(MethodInfo *)0x0),
              this_01 == (MVWorldObjectClient *)0x0)))) break;
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_01,*pQVar13,(MethodInfo *)0x0);
        }
        if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
          return;
        }
        this_02 = (this_00->fields).cullingSubscriberBase;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffe0,pTVar7,(MethodInfo *)0x0);
          CullingSubscriberBase::CullingSubscriberBase_set_Position
                    (this_02,*pVVar14,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pQVar3 = (this_00->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      if ((pQVar3->fields)._size < 1) goto code_?;
      (this_00->fields).current = *ppSVar5;
      func_?();
      pQVar3 = (this_00->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      pSVar4 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar3,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      *ppSVar5 = pSVar4;
      func_?();
      pSVar4 = *ppSVar5;
    } while (pSVar4 != (SmoothPhysicsMovement_Package *)0x0);
  }
code_?:
  uVar15 = func_?(&stack0xffffffc8);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Vector3 GetDesiredHorizontalVelocity() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostMotor::AdvancedGhostMotor_GetDesiredHorizontalVelocity
                    (Vector3 *__return_storage_ptr__,AdvancedGhostMotor *this,MethodInfo *method)

{
  pAVar1 = this;
  fVar2 = (float10)func_?(&(this->fields).velocity,0);
  fStack_3 = (this->fields)._MoveDirection_k__BackingField.z;
  uStack_4._0_4_ = (this->fields)._MoveDirection_k__BackingField.x;
  uStack_4._4_4_ = (this->fields)._MoveDirection_k__BackingField.y;
  fStack_5 = (float)fVar2;
  fVar2 = (float10)func_?(&uStack_4,0);
  fVar6 = (this->fields).speedSmoothing;
  fStack_7 = (float)fVar2;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  this = (AdvancedGhostMotor *)(fVar8 * fVar6);
  pAVar9 = (AdvancedGhostMotor *)0x0;
  if (((float)this < 0.0) || (pAVar9 = _UNK_?, (float)_UNK_? < (float)this)) {
    this = pAVar9;
  }
  fStack_3 = (pAVar1->fields)._MoveDirection_k__BackingField.z;
  uStack_4._0_4_ = (pAVar1->fields)._MoveDirection_k__BackingField.x;
  uStack_4._4_4_ = (pAVar1->fields)._MoveDirection_k__BackingField.y;
  puVar10 = (undefined8 *)func_?(auStack_11,&uStack_4,0);
  fVar6 = *(float *)(puVar10 + 1);
  uStack_4._0_4_ = (float)*puVar10;
  fStack_5 = (fStack_7 - fStack_5) * (float)this + fStack_5;
  uStack_4._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
  __return_storage_ptr__->x = (float)uStack_4 * fStack_5;
  __return_storage_ptr__->y = uStack_4._4_4_ * fStack_5;
  __return_storage_ptr__->z = fVar6 * fStack_5;
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
  (this->fields).interactable = interactable;
  (this->fields)._.weight = 0.7;
  func_?(&(this->fields).interactable,interactable);
  if (ghostBehaviour != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (ghostBehaviour,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)(auStack_3 + 4),pTVar1,(MethodInfo *)0x0);
      (this->fields).baseHeight = pVVar2->y;
      pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)ghostBehaviour,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar4,StringLiteral__physics,(MethodInfo *)0x0);
      this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
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
                                 ((Vector3 *)(auStack_3 + 4),pTVar5,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar1,*pVVar2,(MethodInfo *)0x0);
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(this_00,(MethodInfo *)0x0);
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(ghostBehaviour,(MethodInfo *)0x0);
                if (pTVar5 != (Transform *)0x0) {
                  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation((Quaternion *)auStack_3,pTVar5,(MethodInfo *)0x0)
                  ;
                  if (pTVar1 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar1,*pQVar6,(MethodInfo *)0x0);
                    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(this_00,(MethodInfo *)0x0);
                    (this->fields).targetTransform = pTVar1;
                    func_?(&(this->fields).targetTransform,pTVar1);
                    pSVar7 = (SmoothPhysicsMovement *)
                             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_AddComponent_1
                                       (ghostBehaviour,
                                        SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                                       );
                    (this->fields).smoothPhysicsMovement = pSVar7;
                    func_?(&(this->fields).smoothPhysicsMovement,pSVar7);
                    pSVar7 = (this->fields).smoothPhysicsMovement;
                    if (pSVar7 != (SmoothPhysicsMovement *)0x0) {
                      pTVar1 = (this->fields).targetTransform;
                      (pSVar7->fields).targetTransform = pTVar1;
                      func_?(&(pSVar7->fields).targetTransform,pTVar1);
                      (pSVar7->fields).cullingSubscriberBase = cullingSubscriberBase;
                      func_?(&(pSVar7->fields).cullingSubscriberBase,cullingSubscriberBase)
                      ;
                      (pSVar7->fields).worldObjectOwner = (MVWorldObjectClient *)0x0;
                      func_?(&(pSVar7->fields).worldObjectOwner,0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    value.y = velocity.y * fVar1 + (float)uVar4;
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
    fVar6 = (float10)(*(code *)(pMVar3->klass->vtable).__unknown_8.method)
                               (pMVar3,0xc,(this->fields).ghostFriction,
                                (pMVar3->klass->vtable).__unknown_9.methodPtr);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  (this->fields)._.impulseVectors = this_01;
  func_?(&(this->fields)._.impulseVectors,this_01);
  InGameMenuStatePlayModeController::InGameMenuStatePlayModeController__ctor
            ((InGameMenuStatePlayModeController *)this,(MethodInfo *)0x0);
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

