
/* Void OnTriggerEnter(Collider) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_OnTriggerEnter
               (AllWorldObjectTriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TriggerEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar3->fields).currentGameState != 1) {
      return;
    }
    if ((other != (Collider *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)other,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
      t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (this_00,(MethodInfo *)0x0);
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                         (t,(MethodInfo *)0x0);
      if (pMVar4 == (MVWorldObjectClient *)0x0) {
        return;
      }
      if ((this->fields).TriggerEnter == (EventHandler_1_TriggerEventArgs_ *)0x0) {
        return;
      }
      woid = (pMVar4->fields)._.id;
      pEVar5 = (this->fields).TriggerEnter;
      this_01 = (TriggerEventArgs *)FUN_?(TypeInfo__TriggerEventArgs);
      TriggerEventArgs::TriggerEventArgs__ctor(this_01,woid,(MethodInfo *)0x0);
      (*(pEVar5->fields)._._.invoke_impl)
                ((pEVar5->fields)._._.method_code,this,this_01,(pEVar5->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnTriggerExit(Collider) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_OnTriggerExit
               (AllWorldObjectTriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TriggerEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (other != (Collider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)other,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (this_00,(MethodInfo *)0x0);
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                         (t,(MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
         ((this->fields).TriggerExit != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
        woid = (pMVar1->fields)._.id;
        pEVar2 = (this->fields).TriggerExit;
        this_01 = (TriggerEventArgs *)FUN_?(TypeInfo__TriggerEventArgs);
        TriggerEventArgs::TriggerEventArgs__ctor(this_01,woid,(MethodInfo *)0x0);
        (*(pEVar2->fields)._._.invoke_impl)
                  ((pEVar2->fields)._._.method_code,this,this_01,(pEVar2->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerEnter;
  a = (this->fields).TriggerEnter;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_TriggerEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_TriggerEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (pEVar4 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != a;
    a = pEVar4;
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
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerExit;
  a = (this->fields).TriggerExit;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_TriggerEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_TriggerEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (pEVar4 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != a;
    a = pEVar4;
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
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerEnter;
  source = (this->fields).TriggerEnter;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_TriggerEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_TriggerEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (pEVar4 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != source;
    source = pEVar4;
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
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerExit;
  source = (this->fields).TriggerExit;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<TriggerEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_TriggerEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_TriggerEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (pEVar4 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

