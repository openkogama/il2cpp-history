
/* Void OnTriggerEnter(Collider) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_OnTriggerEnter
               (AllWorldObjectTriggerBoxEvents *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0),
     this_01 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    pOVar1 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_01,(MethodInfo *)0x0);
    if (pOVar1 == (Object *)0x1) {
      if ((other == (Collider *)0x0) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)other,(MethodInfo *)0x0), this_02 == (GameObject *)0x0
         )) goto code_?;
      t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (this_02,(MethodInfo *)0x0);
      this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (t,(MethodInfo *)0x0);
      if ((this_03 != (MVWorldObjectClient *)0x0) &&
         (this_04 = other[1].klass, this_04 != (Collider__Class *)0x0)) {
        woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0)
        ;
        e = (InitializedGameQueryDataEventArgs *)func_?();
        TriggerEventArgs::TriggerEventArgs__ctor
                  ((TriggerEventArgs *)e,(int32_t)woid,(MethodInfo *)0x0);
        mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
        EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                  ((EventHandler_1_InitializedGameQueryDataEventArgs_ *)this_04,(Object *)other,e,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__Invoke_System__Object__TriggerEventArgs_
                  );
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTriggerExit(Collider) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_OnTriggerExit
               (AllWorldObjectTriggerBoxEvents *this,Collider *other,MethodInfo *method)

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
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                        (t,(MethodInfo *)0x0);
    if ((this_01 != (MVWorldObjectClient *)0x0) &&
       ((this->fields).TriggerExit != (EventHandler_1_TriggerEventArgs_ *)0x0)) {
      woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
      e = (InitializedGameQueryDataEventArgs *)func_?();
      TriggerEventArgs::TriggerEventArgs__ctor
                ((TriggerEventArgs *)e,(int32_t)woid,(MethodInfo *)0x0);
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (unaff_EDI,(Object *)this,e,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__Invoke_System__Object__TriggerEventArgs_
                );
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_add_TriggerEnter
               (AllWorldObjectTriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,
               MethodInfo *method)

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


/* Void add_TriggerExit(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_add_TriggerExit
               (AllWorldObjectTriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,
               MethodInfo *method)

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


/* Void remove_TriggerEnter(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_remove_TriggerEnter
               (AllWorldObjectTriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,
               MethodInfo *method)

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


/* Void remove_TriggerExit(EventHandler`1[TriggerEventArgs]) */

void Assembly-CSharp.dll::AllWorldObjectTriggerBoxEvents::
     AllWorldObjectTriggerBoxEvents_remove_TriggerExit
               (AllWorldObjectTriggerBoxEvents *this,EventHandler_1_TriggerEventArgs_ *value,
               MethodInfo *method)

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

