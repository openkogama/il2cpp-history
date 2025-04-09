
/* Void ApplyForceTo(MVRigidBody) */

void Assembly-CSharp.dll::ForceField::ForceField_ApplyForceTo
               (ForceField *this,MVRigidBody *body,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
    pCVar2 = (this->fields).trigger;
    if (pCVar2 != (CapsuleCollider *)0x0) {
      pVVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                CapsuleCollider_get_center((Vector3 *)&stack0xffffffd0,pCVar2,(MethodInfo *)0x0);
      uVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                            ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
        fVar6 = pVVar3->x;
        auVar7._4_4_ = fVar5;
        auVar7._0_4_ = uVar4;
        auVar7._8_4_ = 0;
        pVVar3 = MathFunctions::MathFunctions_Multiply
                            ((Vector3 *)&stack0xffffffe8,(Vector3)(auVar7 << 0x20),*pVVar3,
                             (MethodInfo *)0x0);
        uVar8 = pVVar3->y;
        this_00 = (MVRigidBody *)(this->fields).trigger;
        if (this_00 != (MVRigidBody *)0x0) {
          fVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                  CapsuleCollider_get_height((CapsuleCollider *)this_00,(MethodInfo *)0x0);
          pCVar2 = (this->fields).trigger;
          if (pCVar2 != (CapsuleCollider *)0x0) {
            fVar9 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                     CapsuleCollider_get_radius(pCVar2,(MethodInfo *)0x0);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                  ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
              fVar5 = (fVar5 * _UNK_? - fVar9) * pVVar3->y;
              if (this_00 != (MVRigidBody *)0x0) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                if (pTVar1 != (Transform *)0x0) {
                  fVar9 = ((float)uVar8 + fVar6) - fVar5;
                  fVar5 = (float)uVar8 + fVar6 + fVar5;
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
                  fStack_10 = pVVar3->y;
                  if ((fStack_10 < fVar9) || (fVar9 = fVar5, fVar5 < fStack_10)) {
                    fStack_10 = fVar9;
                  }
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffffdc,pTVar1,(MethodInfo *)0x0);
                    fVar5 = pVVar3->x;
                    fVar6 = pVVar3->z;
                    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                    if (pTVar1 != (Transform *)0x0) {
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
                      uVar11 = pVVar3->x;
                      uVar12 = pVVar3->y;
                      fVar9 = pVVar3->z;
                      puVar13 = (undefined8 *)
                                (*(code *)(this_00->klass->vtable).__unknown_1.method)();
                      if ((float)*puVar13 * ((float)uVar11 - fVar5) +
                          (float)((ulonglong)*puVar13 >> 0x20) * ((float)uVar12 - fStack_10) +
                          *(float *)(puVar13 + 1) * (fVar9 - fVar6) <= 0.0) {
                        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                 Time_1_get_fixedDeltaTime((MethodInfo *)0x0);
                        puVar13 = (undefined8 *)func_?();
                        fVar6 = *(float *)(puVar13 + 1);
                        fVar14 = (float)*puVar13;
                        fVar15 = (float)((ulonglong)*puVar13 >> 0x20);
                        (*(code *)(this_00->klass->vtable).__unknown_1.method)();
                        puStack16 = (undefined *)0x0;
                        puStack17 = &stack0xffffffd0;
                        fVar18 = (float10)func_?();
                        fVar5 = (float)fVar18;
                        fVar9 = _UNK_? / fVar9;
                        fVar19 = fVar14 * fVar5 * fVar9;
                        fVar14 = fVar15 * fVar5 * fVar9;
                        fVar9 = fVar6 * fVar5 * fVar9;
                        impulse.y = fVar14 + fVar14;
                        impulse.x = fVar19 + fVar19;
                        impulse.z = fVar9 + fVar9;
                        MVRigidBody::MVRigidBody_AddImpulse_1(this_00,impulse,0,(MethodInfo *)0x0);
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
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void ApplyNoFriction(MVInteractableBase) */

void Assembly-CSharp.dll::ForceField::ForceField_ApplyNoFriction
               (ForceField *this,MVInteractableBase *interactable,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if (interactable != (MVInteractableBase *)0x0) {
    pIStack_1 = (interactable->klass->vtable).__unknown_5.methodPtr;
    uStack_2 = 0;
    uStack_3 = 0xffffffff;
    (*(code *)(interactable->klass->vtable).__unknown_4.method)(interactable,7);
    return;
  }
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ForceField::ForceField_Awake(ForceField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&MethodInfo__ForceField__OnEnter_System__Object__TriggerEventArgs_);
    func_?(&MethodInfo__ForceField__OnExit_System__Object__TriggerEventArgs_);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).triggerBoxEvents;
  pEVar2 = (EventHandler_1_Object_ *)
           func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (pEVar2,(Object *)this,MethodInfo__ForceField__OnEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar1 != (TriggerBoxEvents *)0x0) {
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pEVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields).triggerBoxEvents;
    pEVar2 = (EventHandler_1_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar2,(Object *)this,
               MethodInfo__ForceField__OnExit_System__Object__TriggerEventArgs_,(MethodInfo *)0x0);
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pEVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::ForceField::ForceField_FixedUpdate(ForceField *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  HStack_6._set = (HashSet_1_System_Object_ *)0x0;
  HStack_6._index = 0;
  HStack_6._version = 0;
  HStack_6._current = (Object *)0x0;
  method_00 = (MethodInfo *)(this->fields).interactablesInField;
  if (method_00 != (MethodInfo *)0x0) {
    pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__GetEnumerator
                       (&HStack_8,(HashSet_1_System_UInt32_ *)method_00,
                        MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__GetEnumerator__
                       );
    method_01 = (MethodInfo *)pHVar7->_version;
    piVar9 = (int *)pHVar7->_current;
    HStack_8._version = 0;
    uStack_1 = 1;
    HStack_8._current = (uint32_t)&stack0xffffffb4;
    while( true ) {
      bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Object]
              ::HashSet_1_T_Enumerator_System_Object__MoveNext
                        ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if (piVar9 == (int *)0x0) goto code_?;
      (**(code **)(*piVar9 + 0x108))(piVar9,7,0xffffffff,0,*(undefined4 *)(*piVar9 + 0x10c));
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pHVar11 = (this->fields).bodiesInField;
    if (pHVar11 != (HashSet_1_MVRigidBody_ *)0x0) {
      pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
               HashSet_1_System_UInt32__GetEnumerator
                         (&HStack_8,(HashSet_1_System_UInt32_ *)pHVar11,
                          MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__GetEnumerator__
                         );
      HStack_6._set = (HashSet_1_System_Object_ *)pHVar7->_set;
      HStack_6._index = pHVar7->_index;
      HStack_6._version = pHVar7->_version;
      HStack_6._current = (Object *)pHVar7->_current;
      HStack_8._version = 0;
      uStack_1 = 4;
      HStack_8._current = (uint32_t)&HStack_6;
      while( true ) {
        while( true ) {
          bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                            (&HStack_6,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__MoveNext__
                            );
          body = HStack_6._current;
          if (bVar10 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&HStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__Dispose__
                       ,method_01);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)body,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar10 != 0) break;
          ForceField_ApplyForceTo(this,(MVRigidBody *)body,(MethodInfo *)0x0);
        }
        pHVar11 = (this->fields).bodiesInField;
        if (pHVar11 == (HashSet_1_MVRigidBody_ *)0x0) break;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Remove
                  ((HashSet_1_System_Object_ *)pHVar11,body,
                   MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                  );
      }
    }
  }
code_?:
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::ForceField::ForceField_OnEnter
               (ForceField *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Add_MVInteractableBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Add_MVRigidBody_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObject *)0x0) {
      return;
    }
    pLVar2 = pMVar1[1].fields.inputLinkRefs;
    if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
      pOVar3 = (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         ((GameObject *)pLVar2,
                          MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (pOVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (pHRam00000020 == (HashSet_1_System_Object_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                  (pHRam00000020,(Object *)pOVar3,
                   MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Add_MVRigidBody_)
        ;
      }
      pLVar2 = pMVar1[1].fields.inputLinkRefs;
      if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
        pOVar3 = (Object_1 *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           ((GameObject *)pLVar2,
                            MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                           );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (pOVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          if (pHRam0000001c == (HashSet_1_System_Object_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                    (pHRam0000001c,(Object *)pOVar3,
                     MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Add_MVInteractableBase_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::ForceField::ForceField_OnExit
               (ForceField *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Remove_MVInteractableBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObject *)0x0) {
      return;
    }
    pLVar2 = pMVar1[1].fields.inputLinkRefs;
    if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
      pOVar3 = (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         ((GameObject *)pLVar2,
                          MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (pOVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (pHRam00000020 == (HashSet_1_System_Object_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Remove
                  (pHRam00000020,(Object *)pOVar3,
                   MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                  );
      }
      pLVar2 = pMVar1[1].fields.inputLinkRefs;
      if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
        pOVar3 = (Object_1 *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           ((GameObject *)pLVar2,
                            MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                           );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (pOVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          if (pHRam0000001c == (HashSet_1_System_Object_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Remove
                    (pHRam0000001c,(Object *)pOVar3,
                     MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Remove_MVInteractableBase_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ForceField() */

void Assembly-CSharp.dll::ForceField::ForceField__ctor(ForceField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__HashSet__);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MVInteractableBase>);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MVRigidBody>);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_MVInteractableBase_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<MVInteractableBase>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__HashSet__);
  ppHVar1 = &(this->fields).interactablesInField;
  *ppHVar1 = this_00;
  func_?(ppHVar1,this_00);
  this_01 = (HashSet_1_MVRigidBody_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<MVRigidBody>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__HashSet__);
  ppHVar2 = &(this->fields).bodiesInField;
  *ppHVar2 = this_01;
  func_?(ppHVar2,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

