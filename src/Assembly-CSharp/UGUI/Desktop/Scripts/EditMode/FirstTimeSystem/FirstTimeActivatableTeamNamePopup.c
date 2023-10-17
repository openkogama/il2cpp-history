
/* Void DoShowing() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNamePopup::FirstTimeActivatableTeamNamePopup_DoShowing
               (FirstTimeActivatableTeamNamePopup *this,MethodInfo *method)

{
  pTVar1 = (this->fields).tabGroup;
  pFVar2 = (this->fields).firstTimeGuiHandler;
  (this->fields).showing = 1;
  if ((pTVar1 != (TabMenu *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0),
     pFVar2 != (FirstTimeGuiHandler *)0x0)) {
    FirstTimeGuiHandler::FirstTimeGuiHandler_OpenTab(pFVar2,pGVar3,6,(MethodInfo *)0x0);
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
                          (pFVar2,MVWorldObjectDocumentationType__Enum_TeamEditor,pGVar3,6,
                           (this->fields).slots,0,(MethodInfo *)0x0);
        pTVar1 = (this->fields).tabGroup;
        pFVar2 = (this->fields).firstTimeGuiHandler;
        if ((pTVar1 != (TabMenu *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar1,(MethodInfo *)0x0),
           pFVar2 != (FirstTimeGuiHandler *)0x0)) {
          FirstTimeGuiHandler::FirstTimeGuiHandler_HighlightInCategoryAtSlot
                    (pFVar2,pGVar3,6,iVar4,(MethodInfo *)0x0);
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
     FirstTimeActivatableTeamNamePopup::FirstTimeActivatableTeamNamePopup_OnFirstTimeState
               (FirstTimeActivatableTeamNamePopup *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum latestFirstTimeEvent,MethodInfo *method)

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
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNamePopup___OnFirstTimeState_b__12_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
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
      if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNamePopup___OnFirstTimeState_b__12_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
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
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNamePopup::FirstTimeActivatableTeamNamePopup_OnShow
               (FirstTimeActivatableTeamNamePopup *this,MethodInfo *method)

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
    FirstTimeGuiHandler::FirstTimeGuiHandler_OpenTab(pFVar2,pGVar3,6,(MethodInfo *)0x0);
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
                          (pFVar2,MVWorldObjectDocumentationType__Enum_TeamEditor,pGVar3,6,
                           (this->fields).slots,0,(MethodInfo *)0x0);
        pTVar1 = (this->fields).tabGroup;
        pFVar2 = (this->fields).firstTimeGuiHandler;
        if ((pTVar1 != (TabMenu *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar1,(MethodInfo *)0x0),
           pFVar2 != (FirstTimeGuiHandler *)0x0)) {
          FirstTimeGuiHandler::FirstTimeGuiHandler_HighlightInCategoryAtSlot
                    (pFVar2,pGVar3,6,iVar4,(MethodInfo *)0x0);
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
     FirstTimeActivatableTeamNamePopup::FirstTimeActivatableTeamNamePopup_Register
               (FirstTimeActivatableTeamNamePopup *this,MethodInfo *method)

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
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNamePopup___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
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
  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNamePopup___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnFirstTimeState>b__12_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNamePopup::FirstTimeActivatableTeamNamePopup__OnFirstTimeState_b__12_0
               (FirstTimeActivatableTeamNamePopup *this,IFirstTimeElementActivator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pFStack_1 = (FirstTimeActivatableTeamNamePopup *)
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
  pFStack_1 = (FirstTimeActivatableTeamNamePopup *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Register>b__13_0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNamePopup::FirstTimeActivatableTeamNamePopup__Register_b__13_0
               (FirstTimeActivatableTeamNamePopup *this,IFirstTimeElementActivator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pFStack_1 = (FirstTimeActivatableTeamNamePopup *)
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
  pFStack_1 = (FirstTimeActivatableTeamNamePopup *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeActivatableTeamNamePopup() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNamePopup::FirstTimeActivatableTeamNamePopup__ctor
               (FirstTimeActivatableTeamNamePopup *this,MethodInfo *method)

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
  value = (WorldObjectTypeInShopChecker *)
          func_?(
                         TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__WorldObjectTypeInShopChecker
                         );
  if (value != (WorldObjectTypeInShopChecker *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
    (this->fields).inShopChecker = value;
    func_?(&(this->fields).inShopChecker,value);
    value_00 = (Object *)
               func_?(
                              TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler
                              );
    if (value_00 != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value_00,ExceptionArgument__Enum_obj,unaff_EDI);
      (this->fields).firstTimeGuiHandler = (FirstTimeGuiHandler *)value_00;
      func_?(&(this->fields).firstTimeGuiHandler,value_00);
      FirstTimeActivatableMessage::FirstTimeActivatableMessage__ctor
                ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableTeamNamePopup::FirstTimeActivatableTeamNamePopup_get_CanShow
               (FirstTimeActivatableTeamNamePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    ((this->fields)._.prerequisiteEvent,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  this_00 = (this->fields).inShopChecker;
  if (this_00 != (WorldObjectTypeInShopChecker *)0x0) {
    bVar1 = WorldObjectTypeInShopChecker::WorldObjectTypeInShopChecker_IsItemInShop
                      (this_00,WorldObjectType__Enum_TeamEditor,(MethodInfo *)0x0);
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
                        MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNamePopup___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
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
      if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableTeamNamePopup___Register_b__13_0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,callbackFunction,
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
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar6 != (MVNetworkGame *)0x0) &&
             (this_02 = (pMVar6->fields).teamManager, this_02 != (MVTeamManager *)0x0)) {
            pLVar7 = MVTeamManager::MVTeamManager_GetTeamList(this_02,(MethodInfo *)0x0);
            if (pLVar7 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
              iVar8 = (pLVar7->fields)._size;
              bVar9 = MVGameControllerBase::MVGameControllerBase_IsInCorrectInventory
                                ((this->fields).insideInventory,(MethodInfo *)0x0);
              bVar10 = 0;
              if (1 < iVar8) {
                bVar10 = bVar9;
              }
              bVar11 = 0;
              if (0 < iVar5) {
                bVar11 = bVar10 & bVar4 & bVar1;
              }
              return bVar11 & bVar3 == 0;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar1 = (*pcVar12)();
  return bVar1;
}

