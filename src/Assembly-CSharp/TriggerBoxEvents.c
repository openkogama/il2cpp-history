
/* MVWorldObjectClient GetValidWorldObject(Collider) */

MVWorldObjectClient *
Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_GetValidWorldObject
          (TriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<UnityEngine::Rigidbody>_int_
                   );
    cRam_? = '\x01';
  }
  if ((other != (Collider *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)other,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (this_00,(MethodInfo *)0x0);
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject(t,(MethodInfo *)0x0)
    ;
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return (MVWorldObjectClient *)0x0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                     (pMVar2,(pMVar1->fields)._.id,
                      int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<UnityEngine::Rigidbody>_int_
                     );
      if (id == -1) {
        return (MVWorldObjectClient *)0x0;
      }
      if ((id == (pMVar1->fields)._.id) ||
         ((pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
          pMVar2 != (MVWorldObjectClientManager *)0x0 &&
          (pMVar1 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar2,id,(MethodInfo *)0x0), pMVar1 != (MVWorldObjectClient *)0x0)))
         ) {
        iVar3 = (pMVar1->fields)._.ownerActorNr;
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((this_01 != (MVNetworkGame *)0x0) &&
           (pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
           pMVar4 != (MVLocalPlayer *)0x0)) {
          if (iVar3 != (pMVar4->fields)._._ActorNr_k__BackingField) {
            return (MVWorldObjectClient *)0x0;
          }
          return pMVar1;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar5)();
  return pMVar1;
}


/* Void OnMVTriggerEnter(Collider) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerEnter
               (TriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TriggerEventArgs);
    cRam_? = '\x01';
  }
  pMVar1 = TriggerBoxEvents_GetValidWorldObject(this,other,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
       pMVar3 == (MVNetworkGameStateListener *)0x0)) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pMVar3->fields).currentGameState == 1) {
      (this->fields).isInTrigger = 1;
      if ((this->fields).TriggerEnterOverride != (EventHandler_1_TriggerEventArgs_ *)0x0) {
        iVar5 = (pMVar1->fields)._.id;
        pEVar6 = (this->fields).TriggerEnterOverride;
        pTVar7 = (TriggerEventArgs *)func_?(TypeInfo__TriggerEventArgs);
        if ((pTVar7 != (TriggerEventArgs *)0x0) &&
           (TriggerEventArgs::TriggerEventArgs__ctor(pTVar7,iVar5,(MethodInfo *)0x0),
           pEVar6 != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
          (*(pEVar6->fields)._._.invoke_impl)((pEVar6->fields)._._.method_code,this,pTVar7);
          return;
        }
        goto code_?;
      }
      if ((this->fields).TriggerEnter != (EventHandler_1_TriggerEventArgs_ *)0x0) {
        iVar5 = (pMVar1->fields)._.id;
        pEVar6 = (this->fields).TriggerEnter;
        pTVar7 = (TriggerEventArgs *)func_?(TypeInfo__TriggerEventArgs);
        if (pTVar7 == (TriggerEventArgs *)0x0) goto code_?;
        TriggerEventArgs::TriggerEventArgs__ctor(pTVar7,iVar5,(MethodInfo *)0x0);
        (*(pEVar6->fields)._._.invoke_impl)((pEVar6->fields)._._.method_code,this,pTVar7);
      }
    }
  }
  return;
}


/* Void OnMVTriggerExit(Collider) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
               (TriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TriggerEventArgs);
    cRam_? = '\x01';
  }
  pMVar1 = TriggerBoxEvents_GetValidWorldObject(this,other,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    (this->fields).isInTrigger = 0;
    if ((this->fields).TriggerExitOverride != (EventHandler_1_TriggerEventArgs_ *)0x0) {
      iVar2 = (pMVar1->fields)._.id;
      pEVar3 = (this->fields).TriggerExitOverride;
      pTVar4 = (TriggerEventArgs *)func_?(TypeInfo__TriggerEventArgs);
      if ((pTVar4 != (TriggerEventArgs *)0x0) &&
         (TriggerEventArgs::TriggerEventArgs__ctor(pTVar4,iVar2,(MethodInfo *)0x0),
         pEVar3 != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
        (*(pEVar3->fields)._._.invoke_impl)
                  ((pEVar3->fields)._._.method_code,this,pTVar4,(pEVar3->fields)._._.method);
        return;
      }
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->fields).TriggerExit != (EventHandler_1_TriggerEventArgs_ *)0x0) {
      iVar2 = (pMVar1->fields)._.id;
      pEVar3 = (this->fields).TriggerExit;
      pTVar4 = (TriggerEventArgs *)func_?(TypeInfo__TriggerEventArgs);
      if (pTVar4 == (TriggerEventArgs *)0x0) goto code_?;
      TriggerEventArgs::TriggerEventArgs__ctor(pTVar4,iVar2,(MethodInfo *)0x0);
      (*(pEVar3->fields)._._.invoke_impl)
                ((pEVar3->fields)._._.method_code,this,pTVar4,(pEVar3->fields)._._.method);
    }
  }
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_OnValidate
               (TriggerBoxEvents *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::Collider>______
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_TriggerBoxEvents__triggerCollide);
    func_?(&StringLiteral_TriggerBoxEvents__triggerCollide);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponents_1
                       ((Component *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::Collider>______
                       );
    if (pOVar3 == (Object__Array *)0x0) goto code_?;
    if ((int)pOVar3->max_length < 2) {
      if (pOVar3->max_length == 1) {
        pCVar1 = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)this,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           );
        (this->fields).triggerCollider = pCVar1;
        func_?();
        pCVar1 = (this->fields).triggerCollider;
        if (pCVar1 == (Collider *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                  (pCVar1,1,(MethodInfo *)0x0);
      }
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_TriggerBoxEvents__triggerCollide,(MethodInfo *)0x0);
    }
  }
  pCVar1 = (this->fields).triggerCollider;
  if (pCVar1 != (Collider *)0x0) {
    bVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_isTrigger
                      (pCVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_TriggerBoxEvents__triggerCollide,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void add_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).TriggerEnter;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)
             func_?(&(this->fields).TriggerEnter,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_TriggerEnterOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).TriggerEnterOverride;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)
             func_?(&(this->fields).TriggerEnterOverride,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_TriggerExit(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).TriggerExit;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)
             func_?(&(this->fields).TriggerExit,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_TriggerExitOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).TriggerExitOverride;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)
             func_?(&(this->fields).TriggerExitOverride,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Collider get_Collider() */

Collider *
Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_get_Collider
          (TriggerBoxEvents *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pCVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pCVar1 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                       );
    (this->fields).triggerCollider = pCVar1;
    func_?(&(this->fields).triggerCollider,pCVar1);
  }
  return (this->fields).triggerCollider;
}


/* Void remove_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).TriggerEnter;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)
             func_?(&(this->fields).TriggerEnter,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_TriggerEnterOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnterOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).TriggerEnterOverride;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)
             func_?(&(this->fields).TriggerEnterOverride,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_TriggerExit(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).TriggerExit;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)
             func_?(&(this->fields).TriggerExit,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_TriggerExitOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExitOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).TriggerExitOverride;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)
             func_?(&(this->fields).TriggerExitOverride,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

