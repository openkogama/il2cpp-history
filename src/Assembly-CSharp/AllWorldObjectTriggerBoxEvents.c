
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
      iVar4 = iRam_?;
      if ((pMVar3 != (MVWorldObjectClient *)0x0) && (iRam_? != 0)) {
        woid = (pMVar3->fields)._.id;
        this_01 = (TriggerEventArgs *)func_?();
        TriggerEventArgs::TriggerEventArgs__ctor(this_01,woid,(MethodInfo *)0x0);
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
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
    pTVar2 = TypeInfo__TriggerEventArgs;
    if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
       (pEVar3 = (this->fields).TriggerExit, pEVar3 != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
      woid = (pMVar1->fields)._.id;
      this_01 = (TriggerEventArgs *)func_?();
      TriggerEventArgs::TriggerEventArgs__ctor(this_01,woid,(MethodInfo *)0x0);
      (*(pEVar3->fields)._._.invoke_impl)((pEVar3->fields)._._.method_code,pTVar2,this_01);
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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

