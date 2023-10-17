
/* Void DoShowing() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory_DoShowing
               (FirstTimeActivatableClientShopInventoryGotoCategory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c___DoShowing_b__5_0_InventoryController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c___DoShowing_b__5_1_InventoryController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                   );
    cRam_? = '\x01';
  }
  (this->fields).showing = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((
      TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                   );
  }
  pEVar2 = TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
           ->static_fields->__9__5_0;
  if (pEVar2 == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
    if ((
        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
        ->_1).cctor_finished_or_no_cctor == 0) {
      func_?(
                     TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                     );
    }
    pFVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
             ->static_fields->__9;
    pEVar2 = (ExecuteEvents_EventFunction_1_InventoryController_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>
                            );
    if (pEVar2 == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pFVar3,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c___DoShowing_b__5_0_InventoryController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
    ->static_fields->__9__5_0 = pEVar2;
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                     ->static_fields->__9__5_0,pEVar2);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((
      TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pEVar2 = TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
           ->static_fields->__9__5_1;
  if (pEVar2 == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
    if ((
        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
        ->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pFVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
             ->static_fields->__9;
    pEVar2 = (ExecuteEvents_EventFunction_1_InventoryController_ *)func_?();
    if (pEVar2 == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pFVar3,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c___DoShowing_b__5_1_InventoryController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
    ->static_fields->__9__5_1 = pEVar2;
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                     ->static_fields->__9__5_1,pEVar2);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
            );
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory_OnDestroy
               (FirstTimeActivatableClientShopInventoryGotoCategory *this,MethodInfo *method)

{
  if ((this->fields)._.isRegistered != 0) {
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
    FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
              ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory_OnShow
               (FirstTimeActivatableClientShopInventoryGotoCategory *this,MethodInfo *method)

{
  if ((this->fields).showing != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c___DoShowing_b__5_0_InventoryController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c___DoShowing_b__5_1_InventoryController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                   );
    cRam_? = '\x01';
  }
  (this->fields).showing = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((
      TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?(
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                   );
  }
  pEVar2 = TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
           ->static_fields->__9__5_0;
  if (pEVar2 == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
    if ((
        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
        ->_1).cctor_finished_or_no_cctor == 0) {
      func_?(
                     TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                     );
    }
    pFVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
             ->static_fields->__9;
    pEVar2 = (ExecuteEvents_EventFunction_1_InventoryController_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>
                            );
    if (pEVar2 == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pFVar3,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c___DoShowing_b__5_0_InventoryController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
    ->static_fields->__9__5_0 = pEVar2;
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                     ->static_fields->__9__5_0,pEVar2);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((
      TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
      ->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pEVar2 = TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
           ->static_fields->__9__5_1;
  if (pEVar2 == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
    if ((
        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
        ->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pFVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
             ->static_fields->__9;
    pEVar2 = (ExecuteEvents_EventFunction_1_InventoryController_ *)func_?();
    if (pEVar2 == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pFVar3,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c___DoShowing_b__5_1_InventoryController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
    ->static_fields->__9__5_1 = pEVar2;
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeActivatableClientShopInventoryGotoCategory____c
                     ->static_fields->__9__5_1,pEVar2);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
            );
  return;
}


/* FirstTimeActivatableClientShopInventoryGotoCategory() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory__ctor
               (FirstTimeActivatableClientShopInventoryGotoCategory *this,MethodInfo *method)

{
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory_get_CanShow
               (FirstTimeActivatableClientShopInventoryGotoCategory *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    bVar3 = MVGameControllerBase::MVGameControllerBase_IsInCorrectInventory
                      ((this->fields).insideInventory,(MethodInfo *)0x0);
    bVar4 = 0;
    if (bVar1 == 0) {
      bVar4 = bVar3 & bVar2;
    }
    return bVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}

