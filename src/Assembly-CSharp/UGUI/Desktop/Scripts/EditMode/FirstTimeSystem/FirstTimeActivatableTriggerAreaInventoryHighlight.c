
/* Void DoShowing() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_DoShowing
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  pFVar1 = (this->fields).firstTimeGuiHandler;
  (this->fields).showing = 1;
  pTVar2 = (this->fields).tabGroup;
  if ((pTVar2 != (TabMenu *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar2,(MethodInfo *)0x0),
     pFVar1 != (FirstTimeGuiHandler *)0x0)) {
    FirstTimeGuiHandler::FirstTimeGuiHandler_OpenTab(pFVar1,pGVar3,10,(MethodInfo *)0x0);
    this_00 = (this->fields).slots;
    if ((this_00 != (InventorySlots *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (obj->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
      iVar7 = (*pcRam_?)(pvVar4);
      if (iVar7 < 1) {
        return;
      }
      pTVar2 = (this->fields).tabGroup;
      pFVar1 = (this->fields).firstTimeGuiHandler;
      if ((pTVar2 != (TabMenu *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0),
         pFVar1 != (FirstTimeGuiHandler *)0x0)) {
        itemSlot = FirstTimeGuiHandler::FirstTimeGuiHandler_GetItemSlot
                             (pFVar1,MVWorldObjectDocumentationType__Enum_TriggerCube,pGVar3,10,
                              (this->fields).slots,0,(MethodInfo *)0x0);
        pTVar2 = (this->fields).tabGroup;
        pFVar1 = (this->fields).firstTimeGuiHandler;
        if ((pTVar2 != (TabMenu *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0),
           pFVar1 != (FirstTimeGuiHandler *)0x0)) {
          FirstTimeGuiHandler::FirstTimeGuiHandler_HighlightInCategoryAtSlot
                    (pFVar1,pGVar3,10,itemSlot,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_OnDestroy
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  if ((this->fields)._.isRegistered != 0) {
    bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      ((this->fields)._.prerequisiteEvent,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
              ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_System_Object_System_Int32_ *)
              FUN_?(
                           TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
    UnityAction_2_System_Object_System_Int32___ctor
              (this_00,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,
               (MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnFirstTimeState(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_OnFirstTimeState
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,
               FirstTimeState *firstTimeState,FirstTimeEvent__Enum latestFirstTimeEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTriggerAreaInventoryHighlight___OnFirstTimeState_b__12_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (firstTimeState != (FirstTimeState *)0x0) {
    iVar1 = (this->fields)._._.firstTimeEvent;
    if (iVar1 != -1) {
      pBVar2 = (firstTimeState->fields).bitArray;
      if (pBVar2 == (BitArray *)0x0) goto code_?;
      if ((((pBVar2->fields).m_length <= iVar1) ||
          (bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                             (pBVar2,iVar1,(MethodInfo *)0x0), bVar3 == 0)) &&
         ((this->fields)._.isRegistered == 0)) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTriggerAreaInventoryHighlight___OnFirstTimeState_b__12_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,this_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                  );
        (this->fields)._.isRegistered = 1;
        return;
      }
    }
    iVar1 = (this->fields)._._.firstTimeEvent;
    if (iVar1 != -1) {
      pBVar2 = (firstTimeState->fields).bitArray;
      if (pBVar2 == (BitArray *)0x0) goto code_?;
      if ((pBVar2->fields).m_length <= iVar1) {
        return;
      }
      bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                        (pBVar2,iVar1,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
    }
    bVar3 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      ((this->fields)._.prerequisiteEvent,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
              ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                    ,0,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    OVar4.m_CachedPtr = (void *)0x0;
    if (this != (FirstTimeActivatableTriggerAreaInventoryHighlight *)0x0) {
      OVar4.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(OVar4.m_CachedPtr,0);
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_OnShow
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  if ((this->fields).showing != 0) {
    return;
  }
  pFVar1 = (this->fields).firstTimeGuiHandler;
  (this->fields).showing = 1;
  pTVar2 = (this->fields).tabGroup;
  if ((pTVar2 != (TabMenu *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar2,(MethodInfo *)0x0),
     pFVar1 != (FirstTimeGuiHandler *)0x0)) {
    FirstTimeGuiHandler::FirstTimeGuiHandler_OpenTab(pFVar1,pGVar3,10,(MethodInfo *)0x0);
    this_00 = (this->fields).slots;
    if ((this_00 != (InventorySlots *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (obj->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
      iVar7 = (*pcRam_?)(pvVar4);
      if (iVar7 < 1) {
        return;
      }
      pTVar2 = (this->fields).tabGroup;
      pFVar1 = (this->fields).firstTimeGuiHandler;
      if ((pTVar2 != (TabMenu *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0),
         pFVar1 != (FirstTimeGuiHandler *)0x0)) {
        itemSlot = FirstTimeGuiHandler::FirstTimeGuiHandler_GetItemSlot
                             (pFVar1,MVWorldObjectDocumentationType__Enum_TriggerCube,pGVar3,10,
                              (this->fields).slots,0,(MethodInfo *)0x0);
        pTVar2 = (this->fields).tabGroup;
        pFVar1 = (this->fields).firstTimeGuiHandler;
        if ((pTVar2 != (TabMenu *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0),
           pFVar1 != (FirstTimeGuiHandler *)0x0)) {
          FirstTimeGuiHandler::FirstTimeGuiHandler_HighlightInCategoryAtSlot
                    (pFVar1,pGVar3,10,itemSlot,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Register() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_Register
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTriggerAreaInventoryHighlight___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTriggerAreaInventoryHighlight___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
            );
  (this->fields)._.isRegistered = 1;
  return;
}


/* Void <OnFirstTimeState>b__12_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight__OnFirstTimeState_b__12_0
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,
               IFirstTimeElementActivator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IFirstTimeElementActivator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator) {
        pVVar5 = &(pIVar3->vtable).RegisterActivatableElement +
                 pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,this,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <Register>b__13_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight__Register_b__13_0
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,
               IFirstTimeElementActivator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IFirstTimeElementActivator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator) {
        pVVar5 = &(pIVar3->vtable).RegisterActivatableElement +
                 pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,this,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* FirstTimeActivatableTriggerAreaInventoryHighlight() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight__ctor
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__WorldObjectTypeInShopChecker
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (WorldObjectTypeInShopChecker *)
           FUN_?(
                        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__WorldObjectTypeInShopChecker
                        );
  bVar2 = iRam_? != 0;
  (this->fields).inShopChecker = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).inShopChecker >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pFVar7 = (FirstTimeGuiHandler *)
           FUN_?(
                        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler
                        );
  bVar2 = iRam_? != 0;
  (this->fields).firstTimeGuiHandler = pFVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).firstTimeGuiHandler >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar2 = cRam_? == '\0';
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTriggerAreaInventoryHighlight::
     FirstTimeActivatableTriggerAreaInventoryHighlight_get_CanShow
               (FirstTimeActivatableTriggerAreaInventoryHighlight *this,MethodInfo *method)

{
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    ((this->fields)._.prerequisiteEvent,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  this_00 = (this->fields).inShopChecker;
  if (this_00 != (WorldObjectTypeInShopChecker *)0x0) {
    bVar1 = WorldObjectTypeInShopChecker::WorldObjectTypeInShopChecker_IsItemInShop
                      (this_00,WorldObjectType__Enum_TriggerCube,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTriggerAreaInventoryHighlight___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTriggerAreaInventoryHighlight___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                );
      (this->fields)._.isRegistered = 1;
    }
    bVar3 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                      ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar2,(MethodInfo *)0x0);
      this_01 = (this->fields).slots;
      if (this_01 != (InventorySlots *)0x0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                            (this_03,(MethodInfo *)0x0);
          bVar6 = 0;
          if (0 < iVar5) {
            bVar6 = bVar4;
          }
          return bVar6 & (bVar3 ^ 1) & (this->fields).insideInventory & bVar1;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}

