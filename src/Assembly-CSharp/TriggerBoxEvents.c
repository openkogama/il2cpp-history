
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
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pMVar3->fields).currentGameState == 1) {
      other = (Collider *)(this->fields).TriggerEnterOverride;
      (this->fields).isInTrigger = 1;
      if (((EventHandler_1_TriggerEventArgs_ *)other != (EventHandler_1_TriggerEventArgs_ *)0x0) ||
         (other = (Collider *)(this->fields).TriggerEnter,
         (EventHandler_1_TriggerEventArgs_ *)other != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
        woid = (pMVar1->fields)._.id;
        this_00 = (TriggerEventArgs *)func_?(TypeInfo__TriggerEventArgs);
        TriggerEventArgs::TriggerEventArgs__ctor(this_00,woid,(MethodInfo *)0x0);
        (*(code *)other[1].klass)
                  (other[2].fields._._.m_CachedPtr,this,this_00,other[1].fields._._.m_CachedPtr);
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
    other = (Collider *)(this->fields).TriggerExitOverride;
    (this->fields).isInTrigger = 0;
    if (((EventHandler_1_TriggerEventArgs_ *)other != (EventHandler_1_TriggerEventArgs_ *)0x0) ||
       (other = (Collider *)(this->fields).TriggerExit,
       (EventHandler_1_TriggerEventArgs_ *)other != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
      woid = (pMVar1->fields)._.id;
      this_00 = (TriggerEventArgs *)func_?(TypeInfo__TriggerEventArgs);
      TriggerEventArgs::TriggerEventArgs__ctor(this_00,woid,(MethodInfo *)0x0);
      (*(code *)other[1].klass)
                (other[2].fields._._.m_CachedPtr,this,this_00,other[1].fields._._.m_CachedPtr);
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
  ppCVar2 = &(this->fields).triggerCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponents_1
                       ((Component *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::Collider>______
                       );
    if (pOVar4 == (Object__Array *)0x0) goto code_?;
    if ((int)pOVar4->max_length < 2) {
      if (pOVar4->max_length == 1) {
        pCVar1 = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)this,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           );
        *ppCVar2 = pCVar1;
        func_?(ppCVar2);
        if (*ppCVar2 == (Collider *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                  (*ppCVar2,1,(MethodInfo *)0x0);
      }
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_TriggerBoxEvents__triggerCollide,(MethodInfo *)0x0);
    }
  }
  if (*ppCVar2 != (Collider *)0x0) {
    bVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_isTrigger
                      (*ppCVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_TriggerBoxEvents__triggerCollide,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  ppEVar1 = &(this->fields).TriggerEnter;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).TriggerEnterOverride;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).TriggerExit;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).TriggerExitOverride;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
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
  ppCVar2 = &(this->fields).triggerCollider;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pCVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pCVar1 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                       );
    *ppCVar2 = pCVar1;
    func_?(ppCVar2,pCVar1);
  }
  return *ppCVar2;
}


/* Void remove_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerEnter;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).TriggerEnterOverride;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).TriggerExit;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).TriggerExitOverride;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
  return;
}

