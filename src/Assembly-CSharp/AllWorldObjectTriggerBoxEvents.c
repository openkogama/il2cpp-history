
/* Void OnTriggerEnter(Collider) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_OnTriggerEnter
               (AllWorldObjectTriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TriggerEventArgs);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).currentGameState == 1) {
      if ((other == (Collider *)0x0) ||
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)other,(MethodInfo *)0x0), this_00 == (GameObject *)0x0))
      goto code_?;
      t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (this_00,(MethodInfo *)0x0);
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                         (t,(MethodInfo *)0x0);
      if ((pMVar3 != (MVWorldObjectClient *)0x0) &&
         ((this->fields).TriggerEnter != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
        woid = (pMVar3->fields)._.id;
        pEVar4 = (this->fields).TriggerEnter;
        this_01 = (TriggerEventArgs *)func_?();
        if (this_01 == (TriggerEventArgs *)0x0) goto code_?;
        TriggerEventArgs::TriggerEventArgs__ctor(this_01,woid,(MethodInfo *)0x0);
        (*(pEVar4->fields)._._.invoke_impl)((pEVar4->fields)._._.method_code,this,this_01);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnTriggerExit(Collider) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_OnTriggerExit
               (AllWorldObjectTriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TriggerEventArgs);
    cRam_? = '\x01';
  }
  if ((other != (Collider *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)other,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (this_00,(MethodInfo *)0x0);
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject(t,(MethodInfo *)0x0)
    ;
    if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
       ((this->fields).TriggerExit != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
      woid = (pMVar1->fields)._.id;
      pEVar2 = (this->fields).TriggerExit;
      this_01 = (TriggerEventArgs *)func_?();
      if (this_01 == (TriggerEventArgs *)0x0) goto code_?;
      TriggerEventArgs::TriggerEventArgs__ctor(this_01,woid,(MethodInfo *)0x0);
      (*(pEVar2->fields)._._.invoke_impl)
                ((pEVar2->fields)._._.method_code,this,this_01,(pEVar2->fields)._._.method);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void add_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_add_TriggerEnter
               (AllWorldObjectTriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,
               MethodInfo *method)

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


/* Void add_TriggerExit(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_add_TriggerExit
               (AllWorldObjectTriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,
               MethodInfo *method)

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


/* Void remove_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_remove_TriggerEnter
               (AllWorldObjectTriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,
               MethodInfo *method)

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


/* Void remove_TriggerExit(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_remove_TriggerExit
               (AllWorldObjectTriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,
               MethodInfo *method)

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

