
/* Void Awake() */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_Awake
               (FullscreenToggleExecute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FullScreenController);
  }
  pUVar1 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__FullscreenToggleExecute__FullscreenChanged_bool_,
             MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__)
  ;
  pUStack2 =
       (UnityAction_1_System_Boolean_ *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_1_System_Boolean_ *)0x0;
  if (pUStack2 != (UnityAction_1_System_Boolean_ *)0x0) {
    if (pUStack2->klass == TypeInfo__UnityEngine__Events__UnityAction<bool>) {
      pUVar1 = pUStack2;
    }
    if (pUVar1 == (UnityAction_1_System_Boolean_ *)0x0) {
      pUStack3 = TypeInfo__UnityEngine__Events__UnityAction<bool>;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__FullScreenController->static_fields->OnFullScreenChange = pUVar1;
  return;
}


/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_ExecuteToggleState
               (FullscreenToggleExecute *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FullScreenController);
  }
  bVar1 = FullScreenController::FullScreenController_AllowFullscreenChange((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
      UnityAction_1_System_Boolean__Invoke
                (toggleCallback,toggleState ^ 1,
                 MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
      if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
        func_?();
      }
      FullScreenController::FullScreenController_set_FullScreen(0,(MethodInfo *)0x0);
      return;
    }
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__FullscreenToggleExecute->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__FullscreenToggleExecute___ExecuteToggleState_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__FullscreenToggleExecute->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__FullscreenToggleExecute->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void FullscreenChanged(Boolean) */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_FullscreenChanged
               (FullscreenToggleExecute *this,bool fullscreenState,MethodInfo *method)

{
  pTVar1 = (this->fields).toggleStateHandler;
  if (pTVar1 != (ToggleStateHandler *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((pTVar1->fields)._.waitingForToggleCallback != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Overriding_toggle_state_while_wa,(MethodInfo *)0x0);
    }
    (pTVar1->fields)._.toggleState = fullscreenState;
    (*(code *)(pTVar1->klass->vtable).UpdateToggleState.method)(pTVar1,pTVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <ExecuteToggleState>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute__ExecuteToggleState_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Fullscreen_is_not_supported_in_u000A,(MethodInfo *)0x0);
  pSVar1 = TM::TM__(StringLiteral_Error,(MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar6 = &(&(x->klass->vtable).Create_3)[pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
  (*(code *)*ppMVar6)(x,ppMVar6[1],pSVar1);
  return;
}

