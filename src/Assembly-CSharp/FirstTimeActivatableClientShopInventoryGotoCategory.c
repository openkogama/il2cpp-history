
/* Void DoShowing() */

void Assembly-CSharp.dll::FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory_DoShowing
               (FirstTimeActivatableClientShopInventoryGotoCategory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).showing = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->__f__am_cache0
      == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__FirstTimeActivatableClientShopInventoryGotoCategory___DoShowing_m__0_InventoryController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>__EventFunction_System__Object__void__
              );
    TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_InventoryController_ *)pUVar2;
  }
  pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->
           __f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->__f__am_cache1
      == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__FirstTimeActivatableClientShopInventoryGotoCategory___DoShowing_m__1_InventoryController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>__EventFunction_System__Object__void__
              );
    TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_InventoryController_ *)pUVar2;
  }
  pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->
           __f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
            );
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory_OnDestroy
               (FirstTimeActivatableClientShopInventoryGotoCategory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRegistered != 0) {
    firstTimeEvent = (this->fields)._._.firstTimeEvent;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0)
    ;
    FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
              ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory_OnShow
               (FirstTimeActivatableClientShopInventoryGotoCategory *this,MethodInfo *method)

{
  if ((this->fields).showing == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (this->fields).showing = 1;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->__f__am_cache0
        == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__FirstTimeActivatableClientShopInventoryGotoCategory___DoShowing_m__0_InventoryController__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>__EventFunction_System__Object__void__
                );
      TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_InventoryController_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->
             __f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->__f__am_cache1
        == (ExecuteEvents_EventFunction_1_InventoryController_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__FirstTimeActivatableClientShopInventoryGotoCategory___DoShowing_m__1_InventoryController__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>__EventFunction_System__Object__void__
                );
      TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_InventoryController_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__FirstTimeActivatableClientShopInventoryGotoCategory->static_fields->
             __f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<InventoryController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<InventoryController>_
              );
  }
  return;
}


/* Void <DoShowing>m__0(InventoryController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory__DoShowing_m__0
               (InventoryController *x,BaseEventData *y,MethodInfo *method)

{
  if (x != (InventoryController *)0x0) {
    InventoryController::InventoryController_SelectTab(x,3,0,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <DoShowing>m__1(InventoryController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableClientShopInventoryGotoCategory::
     FirstTimeActivatableClientShopInventoryGotoCategory__DoShowing_m__1
               (InventoryController *x,BaseEventData *y,MethodInfo *method)

{
  if (x != (InventoryController *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this = (Action_1_UIPushOption_ *)(x->fields).OnTabSelected;
    if (this != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this,UIPushOption__Enum_HideAll|UIPushOption__Enum_Blocking,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

