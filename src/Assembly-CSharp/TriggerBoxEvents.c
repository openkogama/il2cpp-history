
/* MVWorldObjectClient GetValidWorldObject(Collider) */

MVWorldObjectClient *
Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_GetValidWorldObject
          (TriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<UnityEngine::Rigidbody>_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((other != (Collider *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)other,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (this_01,(MethodInfo *)0x0);
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
          (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar2,id,(MethodInfo *)0x0), pMVar1 != (MVWorldObjectClient *)0x0)))
         ) {
        iVar3 = (pMVar1->fields)._.ownerActorNr;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           ((this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
            (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0)))) {
          if (iVar3 != (pMVar5->fields)._._ActorNr_k__BackingField) {
            return (MVWorldObjectClient *)0x0;
          }
          return pMVar1;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar1;
}


/* Void OnMVTriggerEnter(Collider) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerEnter
               (TriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TriggerEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TriggerBoxEvents_GetValidWorldObject(this,other,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       (pMVar4 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
       pMVar4 == (MVNetworkGameStateListener *)0x0)) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pMVar4->fields).currentGameState == 1) {
      (this->fields).isInTrigger = 1;
      if ((this->fields).TriggerEnterOverride == (EventHandler_1_TriggerEventArgs_ *)0x0) {
        pEVar6 = (this->fields).TriggerEnter;
        if (pEVar6 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
          return;
        }
        iVar7 = (pMVar1->fields)._.id;
        this_00 = (TriggerEventArgs *)FUN_?(TypeInfo__TriggerEventArgs);
        TriggerEventArgs::TriggerEventArgs__ctor(this_00,iVar7,(MethodInfo *)0x0);
        pcVar5 = (pEVar6->fields)._._.invoke_impl;
        pvVar8 = (pEVar6->fields)._._.method;
        pvVar9 = (pEVar6->fields)._._.method_code;
      }
      else {
        pEVar6 = (this->fields).TriggerEnterOverride;
        iVar7 = (pMVar1->fields)._.id;
        this_00 = (TriggerEventArgs *)FUN_?(TypeInfo__TriggerEventArgs);
        TriggerEventArgs::TriggerEventArgs__ctor(this_00,iVar7,(MethodInfo *)0x0);
        if (pEVar6 == (EventHandler_1_TriggerEventArgs_ *)0x0) goto code_?;
        pcVar5 = (pEVar6->fields)._._.invoke_impl;
        pvVar8 = (pEVar6->fields)._._.method;
        pvVar9 = (pEVar6->fields)._._.method_code;
      }
      (*pcVar5)(pvVar9,this,this_00,pvVar8);
    }
  }
  return;
}


/* Void OnMVTriggerExit(Collider) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
               (TriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TriggerEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TriggerBoxEvents_GetValidWorldObject(this,other,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    (this->fields).isInTrigger = 0;
    if ((this->fields).TriggerExitOverride == (EventHandler_1_TriggerEventArgs_ *)0x0) {
      pEVar2 = (this->fields).TriggerExit;
      if (pEVar2 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
        return;
      }
      iVar3 = (pMVar1->fields)._.id;
      this_00 = (TriggerEventArgs *)FUN_?(TypeInfo__TriggerEventArgs);
      TriggerEventArgs::TriggerEventArgs__ctor(this_00,iVar3,(MethodInfo *)0x0);
      pcVar4 = (pEVar2->fields)._._.invoke_impl;
      pvVar5 = (pEVar2->fields)._._.method;
      pvVar6 = (pEVar2->fields)._._.method_code;
    }
    else {
      pEVar2 = (this->fields).TriggerExitOverride;
      iVar3 = (pMVar1->fields)._.id;
      this_00 = (TriggerEventArgs *)FUN_?(TypeInfo__TriggerEventArgs);
      TriggerEventArgs::TriggerEventArgs__ctor(this_00,iVar3,(MethodInfo *)0x0);
      if (pEVar2 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = (pEVar2->fields)._._.invoke_impl;
      pvVar5 = (pEVar2->fields)._._.method;
      pvVar6 = (pEVar2->fields)._._.method_code;
    }
    (*pcVar4)(pvVar6,this,this_00,pvVar5);
  }
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_OnValidate
               (TriggerBoxEvents *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::Collider>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TriggerBoxEvents__triggerCollide);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TriggerBoxEvents__triggerCollide);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerCollider;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 == (Collider *)0x0) {
code_?:
    pMVar2 = 
    UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::Collider>______
    ;
    if ((
        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::Collider>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::Collider>______
                   );
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if ((this_00 == (GameObject *)0x0) ||
       (p_Var5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponents_1
                           (this_00,((pMVar2->field7_0x38).rgctx_data)->method),
       p_Var5 == (_Il2CppFullySharedGenericType__Array *)0x0)) goto code_?;
    iVar3 = (int)p_Var5->max_length;
    if (iVar3 < 2) {
      if (iVar3 == 1) {
        pCVar1 = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)this,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           );
        (this->fields).triggerCollider = pCVar1;
        func_?(&(this->fields).triggerCollider);
        pCVar1 = (this->fields).triggerCollider;
        if (pCVar1 == (Collider *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                  (pCVar1,1,(MethodInfo *)0x0);
      }
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_TriggerBoxEvents__triggerCollide,(MethodInfo *)0x0);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pCVar1 = (this->fields).triggerCollider;
  if (pCVar1 != (Collider *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pCVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    cVar7 = (*pcRam_?)(pvVar4);
    if (cVar7 == '\0') {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_TriggerBoxEvents__triggerCollide,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void add_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

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


/* Void add_TriggerEnterOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerEnterOverride;
  a = (this->fields).TriggerEnterOverride;
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

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

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


/* Void add_TriggerExitOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerExitOverride;
  a = (this->fields).TriggerExitOverride;
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


/* Collider get_Collider() */

Collider *
Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_get_Collider
          (TriggerBoxEvents *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerCollider;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar1 != (Collider *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pCVar1 = (Collider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                     );
  bVar2 = iRam_? == 0;
  (this->fields).triggerCollider = pCVar1;
  if (bVar2) {
    return pCVar1;
  }
  uVar3 = (uint)((ulonglong)&(this->fields).triggerCollider >> 0xc);
  puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar5 = *puVar4;
    LOCK();
    uVar6 = *puVar4;
    if (uVar5 == uVar6) {
      *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
    }
    UNLOCK();
  } while (uVar5 != uVar6);
code_?:
  return (this->fields).triggerCollider;
}


/* Void remove_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

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


/* Void remove_TriggerEnterOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnterOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerEnterOverride;
  source = (this->fields).TriggerEnterOverride;
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

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

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


/* Void remove_TriggerExitOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExitOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerExitOverride;
  source = (this->fields).TriggerExitOverride;
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

