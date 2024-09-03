
/* Void DoShowing() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableSpawnRolesInventoryHighlight::
     FirstTimeActivatableSpawnRolesInventoryHighlight_DoShowing
               (FirstTimeActivatableSpawnRolesInventoryHighlight *this,MethodInfo *method)

{
  pTVar1 = (this->fields).tabGroup;
  pFVar2 = (this->fields).firstTimeGuiHandler;
  (this->fields).showing = 1;
  if ((pTVar1 != (TabMenu *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0),
     pFVar2 != (FirstTimeGuiHandler *)0x0)) {
    FirstTimeGuiHandler::FirstTimeGuiHandler_OpenTab(pFVar2,pGVar3,8,(MethodInfo *)0x0);
    this_00 = (this->fields).slots;
    if ((this_00 != (InventorySlots *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0))
    {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                        (this_01,(MethodInfo *)0x0);
      if (iVar4 < 1) {
        return;
      }
      pTVar1 = (this->fields).tabGroup;
      pFVar2 = (this->fields).firstTimeGuiHandler;
      if ((pTVar1 != (TabMenu *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0),
         pFVar2 != (FirstTimeGuiHandler *)0x0)) {
        iVar4 = FirstTimeGuiHandler::FirstTimeGuiHandler_GetItemSlot
                          (pFVar2,MVWorldObjectDocumentationType__Enum_AvatarClass,pGVar3,8,
                           (this->fields).slots,0,(MethodInfo *)0x0);
        pTVar1 = (this->fields).tabGroup;
        pFVar2 = (this->fields).firstTimeGuiHandler;
        if ((pTVar1 != (TabMenu *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar1,(MethodInfo *)0x0),
           pFVar2 != (FirstTimeGuiHandler *)0x0)) {
          FirstTimeGuiHandler::FirstTimeGuiHandler_HighlightInCategoryAtSlot
                    (pFVar2,pGVar3,8,iVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnFirstTimeState(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableSpawnRolesInventoryHighlight::
     FirstTimeActivatableSpawnRolesInventoryHighlight_OnFirstTimeState
               (FirstTimeActivatableSpawnRolesInventoryHighlight *this,
               FirstTimeState *firstTimeState,FirstTimeEvent__Enum latestFirstTimeEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableSpawnRolesInventoryHighlight___OnFirstTimeState_b__12_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (firstTimeState != (FirstTimeState *)0x0) {
    bVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
            FirstTimeState_HasFirstTimeEventOccured
                      (firstTimeState,(this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
    if ((bVar1 == 0) && ((this->fields)._.isRegistered == 0)) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableSpawnRolesInventoryHighlight___OnFirstTimeState_b__12_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                );
      (this->fields)._.isRegistered = 1;
    }
    else {
      bVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
              FirstTimeState_HasFirstTimeEventOccured
                        (firstTimeState,(this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                          ((this->fields)._.prerequisiteEvent,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)this,(MethodInfo *)0x0);
          return;
        }
      }
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableSpawnRolesInventoryHighlight::
     FirstTimeActivatableSpawnRolesInventoryHighlight_OnShow
               (FirstTimeActivatableSpawnRolesInventoryHighlight *this,MethodInfo *method)

{
  if ((this->fields).showing != 0) {
    return;
  }
  pTVar1 = (this->fields).tabGroup;
  (this->fields).showing = 1;
  pFVar2 = (this->fields).firstTimeGuiHandler;
  if ((pTVar1 != (TabMenu *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0),
     pFVar2 != (FirstTimeGuiHandler *)0x0)) {
    FirstTimeGuiHandler::FirstTimeGuiHandler_OpenTab(pFVar2,pGVar3,8,(MethodInfo *)0x0);
    this_00 = (this->fields).slots;
    if ((this_00 != (InventorySlots *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0))
    {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                        (this_01,(MethodInfo *)0x0);
      if (iVar4 < 1) {
        return;
      }
      pTVar1 = (this->fields).tabGroup;
      pFVar2 = (this->fields).firstTimeGuiHandler;
      if ((pTVar1 != (TabMenu *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0),
         pFVar2 != (FirstTimeGuiHandler *)0x0)) {
        iVar4 = FirstTimeGuiHandler::FirstTimeGuiHandler_GetItemSlot
                          (pFVar2,MVWorldObjectDocumentationType__Enum_AvatarClass,pGVar3,8,
                           (this->fields).slots,0,(MethodInfo *)0x0);
        pTVar1 = (this->fields).tabGroup;
        pFVar2 = (this->fields).firstTimeGuiHandler;
        if ((pTVar1 != (TabMenu *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar1,(MethodInfo *)0x0),
           pFVar2 != (FirstTimeGuiHandler *)0x0)) {
          FirstTimeGuiHandler::FirstTimeGuiHandler_HighlightInCategoryAtSlot
                    (pFVar2,pGVar3,8,iVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Register() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableSpawnRolesInventoryHighlight::
     FirstTimeActivatableSpawnRolesInventoryHighlight_Register
               (FirstTimeActivatableSpawnRolesInventoryHighlight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableSpawnRolesInventoryHighlight___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableSpawnRolesInventoryHighlight___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
            );
  (this->fields)._.isRegistered = 1;
  return;
}


/* Void <OnFirstTimeState>b__12_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableSpawnRolesInventoryHighlight::
     FirstTimeActivatableSpawnRolesInventoryHighlight__OnFirstTimeState_b__12_0
               (FirstTimeActivatableSpawnRolesInventoryHighlight *this,IFirstTimeElementActivator *x
               ,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pFStack_1 = (FirstTimeActivatableSpawnRolesInventoryHighlight *)
                &TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    pFStack_1 = this;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator;
    func_?(0);
    return;
  }
  pFStack_1 = (FirstTimeActivatableSpawnRolesInventoryHighlight *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Register>b__13_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableSpawnRolesInventoryHighlight::
     FirstTimeActivatableSpawnRolesInventoryHighlight__Register_b__13_0
               (FirstTimeActivatableSpawnRolesInventoryHighlight *this,IFirstTimeElementActivator *x
               ,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pFStack_1 = (FirstTimeActivatableSpawnRolesInventoryHighlight *)
                &TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    pFStack_1 = this;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator;
    func_?(0);
    return;
  }
  pFStack_1 = (FirstTimeActivatableSpawnRolesInventoryHighlight *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeActivatableSpawnRolesInventoryHighlight() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableSpawnRolesInventoryHighlight::
     FirstTimeActivatableSpawnRolesInventoryHighlight__ctor
               (FirstTimeActivatableSpawnRolesInventoryHighlight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__WorldObjectTypeInShopChecker
                   );
    cRam_? = '\x01';
  }
  method_01 = 
  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__WorldObjectTypeInShopChecker;
  value = (WorldObjectTypeInShopChecker *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields).inShopChecker = value;
  func_?(&(this->fields).inShopChecker,value);
  method_00 = TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler;
  value_00 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).firstTimeGuiHandler = (FirstTimeGuiHandler *)value_00;
  func_?(&(this->fields).firstTimeGuiHandler,value_00);
  FirstTimeActivatableMessage::FirstTimeActivatableMessage__ctor
            ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableSpawnRolesInventoryHighlight::
     FirstTimeActivatableSpawnRolesInventoryHighlight_get_CanShow
               (FirstTimeActivatableSpawnRolesInventoryHighlight *this,MethodInfo *method)

{
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    ((this->fields)._.prerequisiteEvent,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  this_00 = (this->fields).inShopChecker;
  if (this_00 != (WorldObjectTypeInShopChecker *)0x0) {
    bVar1 = WorldObjectTypeInShopChecker::WorldObjectTypeInShopChecker_IsItemInShop
                      (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                       );
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableSpawnRolesInventoryHighlight___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                       );
        cRam_? = '\x01';
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableSpawnRolesInventoryHighlight___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                );
      (this->fields)._.isRegistered = 1;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                (pGVar2,(MethodInfo *)0x0);
      this_01 = (this->fields).slots;
      if (this_01 != (InventorySlots *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                            (this_02,(MethodInfo *)0x0);
          bVar4 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
          bVar5 = MVGameControllerBase::MVGameControllerBase_IsInCorrectInventory
                            ((this->fields).insideInventory,(MethodInfo *)0x0);
          bVar6 = 0;
          if (0 < iVar3) {
            bVar6 = bVar5 & bVar4 & 0x10 & bVar1;
          }
          return bVar6;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}

