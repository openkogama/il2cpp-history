
/* MVWorldObjectClient GetValidWorldObject(Collider) */

MVWorldObjectClient *
Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_GetValidWorldObject
          (TriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((other != (Collider *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)other,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (this_00,(MethodInfo *)0x0);
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject(t,(MethodInfo *)0x0)
    ;
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return (MVWorldObjectClient *)0x0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      pIVar3 = (IList_1_VoxelHit_ *)
               MVWorldObjectClientManager::
               MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                         (pMVar2,(int32_t)pIVar3,
                          int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<UnityEngine::Rigidbody>_int_
                         );
      if (pIVar3 == (IList_1_VoxelHit_ *)0xffffffff) {
        return (MVWorldObjectClient *)0x0;
      }
      pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0);
      if (pIVar3 != pIVar4) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar2 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar1 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar2,(int32_t)pIVar3,(MethodInfo *)0x0);
      }
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        pSVar5 = (String *)
                 UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar1,
                            (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((this_01 != (MVNetworkGame *)0x0) &&
           (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
           this_02 != (MVLocalPlayer *)0x0)) {
          pSVar6 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0)
          ;
          if (pSVar5 != pSVar6) {
            return (MVWorldObjectClient *)0x0;
          }
          return pMVar1;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar7)();
  return pMVar1;
}


/* Void OnMVTriggerEnter(Collider) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerEnter
               (TriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = TriggerBoxEvents_GetValidWorldObject(this,other,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClient *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_01 == (MVNetworkGame *)0x0) ||
       (this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                               ((InventoryItemPreviewer *)this_01,(MethodInfo *)0x0),
       this_02 ==
       (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
        *)0x0)) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_02,(MethodInfo *)0x0);
    if ((pOVar2 == (Object *)0x1) &&
       (((this->fields).isInTrigger = 1,
        (this->fields).TriggerEnterOverride != (EventHandler_1_TriggerEventArgs_ *)0x0 ||
        ((this->fields).TriggerEnter != (EventHandler_1_TriggerEventArgs_ *)0x0)))) {
      woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
      e = (InitializedGameQueryDataEventArgs *)func_?();
      TriggerEventArgs::TriggerEventArgs__ctor
                ((TriggerEventArgs *)e,(int32_t)woid,(MethodInfo *)0x0);
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                ((EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                 MethodInfo__System__EventHandler<TriggerEventArgs>__Invoke_System__Object__TriggerEventArgs_
                 ,(Object *)this,e,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__Invoke_System__Object__TriggerEventArgs_
                );
    }
  }
  return;
}


/* Void OnMVTriggerExit(Collider) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
               (TriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = TriggerBoxEvents_GetValidWorldObject(this,other,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClient *)0x0) {
    other = (Collider *)(this->fields).TriggerExitOverride;
    (this->fields).isInTrigger = 0;
    if (((EventHandler_1_TriggerEventArgs_ *)other != (EventHandler_1_TriggerEventArgs_ *)0x0) ||
       (other = (Collider *)(this->fields).TriggerExit,
       (EventHandler_1_TriggerEventArgs_ *)other != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
      woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
      e = (InitializedGameQueryDataEventArgs *)func_?(TypeInfo__TriggerEventArgs);
      TriggerEventArgs::TriggerEventArgs__ctor
                ((TriggerEventArgs *)e,(int32_t)woid,(MethodInfo *)0x0);
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                ((EventHandler_1_InitializedGameQueryDataEventArgs_ *)other,(Object *)this,e,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__Invoke_System__Object__TriggerEventArgs_
                );
    }
  }
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_OnValidate
               (TriggerBoxEvents *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerCollider;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponents_10
                       ((Component_1 *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponents<UnityEngine::Collider>______
                       );
    if (pCVar3 == (Collider__Array *)0x0) goto code_?;
    if ((int)pCVar3->max_length < 2) {
      if (pCVar3->max_length == 1) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                            ((Component_1 *)this,
                             UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                            );
        (this->fields).triggerCollider = (Collider *)this_00;
        if (this_00 == (MVInteractableBase *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                  ((Collider *)this_00,1,(MethodInfo *)0x0);
      }
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerEnter;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TriggerEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TriggerEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_TriggerEnterOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnterOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerEnterOverride;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TriggerEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TriggerEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_TriggerExit(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerExit;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TriggerEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TriggerEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_TriggerExitOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_add_TriggerExitOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerExitOverride;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TriggerEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TriggerEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Collider get_Collider() */

Collider *
Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_get_Collider
          (TriggerBoxEvents *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  exists = (this->fields).triggerCollider;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                       );
    (this->fields).triggerCollider = (Collider *)pMVar2;
  }
  return (this->fields).triggerCollider;
}


/* Void remove_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerEnter;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TriggerEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TriggerEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_TriggerEnterOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnterOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerEnterOverride;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TriggerEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TriggerEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_TriggerExit(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerExit;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TriggerEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TriggerEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_TriggerExitOverride(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExitOverride
               (TriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).TriggerExitOverride;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_TriggerEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<TriggerEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<TriggerEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_TriggerEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

